#include <zephyr/kernel.h>
#include <lvgl.h>
#include <zmk/event_manager.h>
#include <zmk/events/keycode_state_changed.h>
#include "bongocat.h"

#include <zephyr/logging/log.h>
LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);

static void set_animation_state(struct zmk_widget_bongocat *widget, struct bongocat_state state) {
    const lv_img_dsc_t* frame;
    
    if (state.left_pressed && state.right_pressed) {
        frame = &bongocat_both;
    } else if (state.left_pressed) {
        frame = &bongocat_left;
    } else if (state.right_pressed) {
        frame = &bongocat_right;
    } else {
        frame = &bongocat_default;
    }

    lv_img_set_src(widget->obj, frame);
}

static void handle_keycode_state_changed(struct zmk_widget_bongocat *widget, const struct zmk_keycode_state_changed *ev) {
    int col = ev->position % 12;
    bool is_left = col < 6;
    
    if (is_left) {
        widget->state.left_pressed = ev->state;
    } else {
        widget->state.right_pressed = ev->state;
    }
    
    set_animation_state(widget, widget->state);
}

static void keycode_state_changed_cb(zmk_event_t *eh) {
    struct zmk_widget_bongocat *widget;
    const struct zmk_keycode_state_changed *ev = as_zmk_keycode_state_changed(eh);
    if (!ev) return;
    
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) {
        handle_keycode_state_changed(widget, ev);
    }
}

ZMK_LISTENER(widget_bongocat, keycode_state_changed_cb);
ZMK_SUBSCRIPTION(widget_bongocat, zmk_keycode_state_changed);

int zmk_widget_bongocat_init(struct zmk_widget_bongocat *widget, lv_obj_t *parent) {
    widget->obj = lv_img_create(parent);
    lv_img_set_src(widget->obj, &bongocat_default);
    widget->state = (struct bongocat_state){0};
    
    sys_slist_append(&widgets, &widget->node);

    return 0;
}

lv_obj_t *zmk_widget_bongocat_obj(struct zmk_widget_bongocat *widget) {
    return widget->obj;
}

void widget_bongocat_init() {
    static bool initialized = false;
    if (!initialized) {
        initialized = true;
        widget_bongocat_init();
    }
}
