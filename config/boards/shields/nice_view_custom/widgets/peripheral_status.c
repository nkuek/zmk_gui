/*
 *
 * Copyright (c) 2023 The ZMK Contributors
 * SPDX-License-Identifier: MIT
 *
 */
#include <zephyr/kernel.h>
#include <zephyr/random/random.h>
#include <zephyr/logging/log.h>
LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

#include <zmk/battery.h>
#include <zmk/display.h>
#include <zmk/events/usb_conn_state_changed.h>
#include <zmk/event_manager.h>
#include <zmk/events/battery_state_changed.h>
#include <zmk/events/keycode_state_changed.h>
#include <zmk/split/bluetooth/peripheral.h>
#include <zmk/events/split_peripheral_status_changed.h>
#include <zmk/usb.h>
#include <zmk/ble.h>


#include "peripheral_status.h"

LV_IMG_DECLARE(us);
LV_IMG_DECLARE(chichi);
LV_IMG_DECLARE(balloon);
LV_IMG_DECLARE(mountain);

static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);

static const lv_img_dsc_t *art_images[] = {
    &balloon,
    &mountain,
    &us,
    &chichi
};
#define NUM_IMAGES (sizeof(art_images) / sizeof(art_images[0]))

struct peripheral_status_state {
    bool connected;
};

struct art_state {
    uint8_t current_image;
    bool auto_cycle;
};

static struct art_state art_cycling = {
    .current_image = 0,
    .auto_cycle = true
};

static struct k_work_delayable cycle_work;

#define CYCLE_INTERVAL K_SECONDS(5)

static void cycle_image(struct k_work *work) {
    if (!art_cycling.auto_cycle) {
        return;
    }
    
    art_cycling.current_image = (art_cycling.current_image + 1) % NUM_IMAGES;
    
    struct zmk_widget_status *widget;
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) {
        lv_obj_t *art = lv_obj_get_child(widget->obj, 1);
        lv_img_set_src(art, art_images[art_cycling.current_image]);
    }
    
    k_work_schedule(&cycle_work, CYCLE_INTERVAL);
}

static void handle_keycode(struct zmk_keycode_state_changed *event) {
    if (!event->state) {
        return;  // Only handle key press, not release
    }
    
    // F13
    if (event->keycode == 0x68) {
        art_cycling.current_image = (art_cycling.current_image + 1) % NUM_IMAGES;
        struct zmk_widget_status *widget;
        SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) {
            lv_obj_t *art = lv_obj_get_child(widget->obj, 1);
            lv_img_set_src(art, art_images[art_cycling.current_image]);
        }
        // F14
    } else if (event->keycode == 0x69) {
        art_cycling.auto_cycle = !art_cycling.auto_cycle;
        if (art_cycling.auto_cycle) {
            k_work_schedule(&cycle_work, CYCLE_INTERVAL);
        } else {
            k_work_cancel_delayable(&cycle_work);
        }
    }
}

static void keycode_state_changed_listener(const zmk_event_t *eh) {
    struct zmk_keycode_state_changed *event = as_zmk_keycode_state_changed(eh);
    handle_keycode(event);
}

ZMK_LISTENER(peripheral_status_keycode_listener, keycode_state_changed_listener);
ZMK_SUBSCRIPTION(peripheral_status_keycode_listener, zmk_keycode_state_changed);

static void set_battery_status(struct zmk_widget_status *widget,
                               struct battery_status_state state) {
#if IS_ENABLED(CONFIG_USB_DEVICE_STACK)
    widget->state.charging = state.usb_present;
#endif /* IS_ENABLED(CONFIG_USB_DEVICE_STACK) */

    widget->state.battery = state.level;

    draw_top(widget->obj, widget->cbuf, &widget->state);
}

static void battery_status_update_cb(struct battery_status_state state) {
    struct zmk_widget_status *widget;
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) { set_battery_status(widget, state); }
}

static struct battery_status_state battery_status_get_state(const zmk_event_t *eh) {
    return (struct battery_status_state){
        .level = zmk_battery_state_of_charge(),
#if IS_ENABLED(CONFIG_USB_DEVICE_STACK)
        .usb_present = zmk_usb_is_powered(),
#endif /* IS_ENABLED(CONFIG_USB_DEVICE_STACK) */
    };
}

ZMK_DISPLAY_WIDGET_LISTENER(widget_battery_status, struct battery_status_state,
                            battery_status_update_cb, battery_status_get_state)

ZMK_SUBSCRIPTION(widget_battery_status, zmk_battery_state_changed);
#if IS_ENABLED(CONFIG_USB_DEVICE_STACK)
ZMK_SUBSCRIPTION(widget_battery_status, zmk_usb_conn_state_changed);
#endif /* IS_ENABLED(CONFIG_USB_DEVICE_STACK) */

static struct peripheral_status_state get_state(const zmk_event_t *_eh) {
    return (struct peripheral_status_state){.connected = zmk_split_bt_peripheral_is_connected()};
}

static void set_connection_status(struct zmk_widget_status *widget,
                                  struct peripheral_status_state state) {
    widget->state.connected = state.connected;

    draw_top(widget->obj, widget->cbuf, &widget->state);
}

static void output_status_update_cb(struct peripheral_status_state state) {
    struct zmk_widget_status *widget;
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) { set_connection_status(widget, state); }
}

ZMK_DISPLAY_WIDGET_LISTENER(widget_peripheral_status, struct peripheral_status_state,
                            output_status_update_cb, get_state)
ZMK_SUBSCRIPTION(widget_peripheral_status, zmk_split_peripheral_status_changed);

int zmk_widget_status_init(struct zmk_widget_status *widget, lv_obj_t *parent) {
    widget->obj = lv_obj_create(parent);
    lv_obj_set_size(widget->obj, 160, 68);
    lv_obj_t *top = lv_canvas_create(widget->obj);
    lv_obj_align(top, LV_ALIGN_TOP_RIGHT, 0, 0);
    lv_canvas_set_buffer(top, widget->cbuf, CANVAS_SIZE, CANVAS_SIZE, LV_IMG_CF_TRUE_COLOR);

    lv_obj_t *art = lv_img_create(widget->obj);
    lv_img_set_src(art, art_images[art_cycling.current_image]);
    lv_obj_align(art, LV_ALIGN_CENTER, 0, 0);

    sys_slist_append(&widgets, &widget->node);
    
    k_work_init_delayable(&cycle_work, cycle_image);
    if (art_cycling.auto_cycle) {
        k_work_schedule(&cycle_work, CYCLE_INTERVAL);
    }
    
    widget_battery_status_init();
    widget_peripheral_status_init();

    return 0;
}

lv_obj_t *zmk_widget_status_obj(struct zmk_widget_status *widget) { return widget->obj; }
