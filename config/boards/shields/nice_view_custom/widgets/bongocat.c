/*
 * Copyright (c) 2024 The ZMK Contributors
 * SPDX-License-Identifier: MIT
 */

#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>

LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

#include <zmk/display.h>
#include <zmk/event_manager.h>
#include <zmk/events/keycode_state_changed.h>

#include "bongocat.h"

static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);

static void set_frame(struct zmk_widget_bongocat *widget, const lv_img_dsc_t *frame) {
    lv_img_set_src(widget->img, frame);
}

static void draw_bongocat(struct zmk_widget_bongocat *widget) {
    if (widget->data.state == BONGOCAT_STATE_IDLE) {
        set_frame(widget, &idle_cat);
    } else {
        set_frame(widget, widget->data.frame ? &tap_cat_1 : &tap_cat_2);
    }
}

static void animation_timer_handler(struct k_timer *dummy) {
    struct zmk_widget_bongocat *widget;
    
    uint32_t now = k_uptime_get_32();
    
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) {
        // If no keypress for 500ms, return to idle
        if (widget->data.state == BONGOCAT_STATE_TYPING && 
            (now - widget->data.last_keypress) > 500) {
            widget->data.state = BONGOCAT_STATE_IDLE;
            widget->data.frame = 0;
            draw_bongocat(widget);
            continue;
        }
        
        // Animate if typing
        if (widget->data.state == BONGOCAT_STATE_TYPING) {
            widget->data.frame = !widget->data.frame;
            draw_bongocat(widget);
        }
    }
}

K_TIMER_DEFINE(animation_timer, animation_timer_handler, NULL);

int zmk_widget_bongocat_init(struct zmk_widget_bongocat *widget, lv_obj_t *parent) {
    widget->obj = lv_obj_create(parent);
    lv_obj_set_size(widget->obj, 80, 64);
    
    widget->img = lv_img_create(widget->obj);
    lv_img_set_src(widget->img, &idle_cat);
    lv_obj_align(widget->img, LV_ALIGN_CENTER, 0, 0);
    
    widget->data.state = BONGOCAT_STATE_IDLE;
    widget->data.frame = 0;
    widget->data.last_keypress = 0;
    
    sys_slist_append(&widgets, &widget->node);
    
    // Start animation timer (50ms interval)
    k_timer_start(&animation_timer, K_MSEC(50), K_MSEC(50));
    
    return 0;
}

int zmk_widget_bongocat_process_keycode_state_changed(struct zmk_widget_bongocat *widget,
                                                    struct zmk_keycode_state_changed *ev) {
    if (!ev) {
        return -EINVAL;
    }

    widget->data.state = ev->state ? BONGOCAT_STATE_TYPING : BONGOCAT_STATE_IDLE;
    widget->data.last_keypress = k_uptime_get_32();
    
    if (widget->data.state == BONGOCAT_STATE_TYPING) {
        widget->data.frame = !widget->data.frame;
    } else {
        widget->data.frame = 0;
    }
    
    draw_bongocat(widget);
    
    return 0;
}

static int bongocat_event_listener(const zmk_event_t *eh) {
    struct zmk_widget_bongocat *widget;
    struct zmk_keycode_state_changed *ev = as_zmk_keycode_state_changed(eh);
    if (ev) {
        SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) {
            zmk_widget_bongocat_process_keycode_state_changed(widget, ev);
        }
    }
    return 0;
}

ZMK_LISTENER(bongocat_event_listener, bongocat_event_listener);
ZMK_SUBSCRIPTION(bongocat_event_listener, zmk_keycode_state_changed);

lv_obj_t *zmk_widget_bongocat_obj(struct zmk_widget_bongocat *widget) {
    return widget->obj;
}
