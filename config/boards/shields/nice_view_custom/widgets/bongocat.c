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
#include <zmk/widgets/widget_listener.h>

#include "bongocat.h"

static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);

struct bongocat_state {
    bool is_typing;
    uint32_t last_update;
};

static void draw_cat(struct zmk_widget_bongocat *widget) {
    const lv_img_dsc_t *frame;
    if (!widget->state.is_typing) {
        frame = &idle_cat;
    } else {
        frame = (widget->state.current_frame == 1) ? &tap_cat_1 : &tap_cat_2;
    }
    lv_img_set_src(widget->img, frame);
}

static void animation_timer_cb(lv_timer_t *timer) {
    struct zmk_widget_bongocat *widget = (struct zmk_widget_bongocat *)timer->user_data;
    uint32_t now = k_uptime_get_32();
    
    if (widget->state.is_typing && 
        (now - widget->state.last_press) > 500) { // 500ms timeout
        widget->state.is_typing = false;
        widget->state.current_frame = 0;
        draw_cat(widget);
        return;
    }
    
    if (widget->state.is_typing) {
        widget->state.current_frame = !widget->state.current_frame;
        draw_cat(widget);
    }
}

int zmk_widget_bongocat_init(struct zmk_widget_bongocat *widget, lv_obj_t *parent) {
    widget->obj = lv_obj_create(parent);
    lv_obj_set_size(widget->obj, 80, 64);
    
    widget->img = lv_img_create(widget->obj);
    lv_img_set_src(widget->img, &idle_cat);
    lv_obj_align(widget->img, LV_ALIGN_CENTER, 0, 0);
    
    widget->state.is_typing = false;
    widget->state.current_frame = 0;
    widget->state.last_press = 0;
    
    widget->timer = lv_timer_create(animation_timer_cb, 50, widget);
    
    sys_slist_append(&widgets, &widget->node);
    
    return 0;
}

static void bongocat_update_cb(struct bongocat_state state) {
    struct zmk_widget_bongocat *widget;
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) {
        widget->state.is_typing = state.is_typing;
        widget->state.last_press = state.last_update;
        if (state.is_typing) {
            widget->state.current_frame = !widget->state.current_frame;
        } else {
            widget->state.current_frame = 0;
        }
        draw_cat(widget);
    }
}

static struct bongocat_state bongocat_get_state(const zmk_event_t *eh) {
    struct zmk_keycode_state_changed *ev = as_zmk_keycode_state_changed(eh);
    if (ev) {
        return (struct bongocat_state){
            .is_typing = ev->state,
            .last_update = k_uptime_get_32()
        };
    }
    return (struct bongocat_state){ 0 };
}

static const struct zmk_widget_listener bongocat_listener = {
    .get_state = bongocat_get_state,
    .update_cb = bongocat_update_cb,
};

ZMK_DISPLAY_WIDGET_LISTENER(widget_bongocat, struct bongocat_state, bongocat_update_cb, bongocat_get_state)

ZMK_SUBSCRIPTION(widget_bongocat, zmk_keycode_state_changed);

lv_obj_t *zmk_widget_bongocat_obj(struct zmk_widget_bongocat *widget) {
    return widget->obj;
}
