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
#include <zmk/events/layer_state_changed.h>

#include "bongocat.h"

static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);

// Frame timing
#define FRAME_DURATION 50 // milliseconds per frame
#define IDLE_TIMEOUT 500 // milliseconds before returning to idle

extern const lv_img_dsc_t idle_cat;  // Frame 0 - idle position
extern const lv_img_dsc_t tap_cat_1; // Frame 1 - typing position 1
extern const lv_img_dsc_t tap_cat_2; // Frame 2 - typing position 2

static void draw_cat(struct zmk_widget_bongocat *widget) {
    const lv_img_dsc_t *frame;
    
    // Select frame based on current state
    if (!widget->state.is_typing) {
        frame = &idle_cat;
    } else {
        // Alternate between tap frames while typing
        frame = (widget->state.current_frame == 1) ? &tap_cat_1 : &tap_cat_2;
    }
    
    lv_img_set_src(widget->img, frame);
}

static void animation_timer_cb(lv_timer_t *timer) {
    struct zmk_widget_bongocat *widget = (struct zmk_widget_bongocat *)timer->user_data;
    uint32_t now = k_uptime_get_32();
    
    // Check if we should return to idle
    if (widget->state.is_typing && 
        (now - widget->state.last_press) > IDLE_TIMEOUT) {
        widget->state.is_typing = false;
        widget->state.current_frame = 0;
        draw_cat(widget);
        return;
    }
    
    // If typing, cycle frames
    if (widget->state.is_typing) {
        widget->state.current_frame = !widget->state.current_frame;
        draw_cat(widget);
    }
}

static void set_typing_state(struct zmk_widget_bongocat *widget, bool is_typing) {
    widget->state.is_typing = is_typing;
    widget->state.last_press = k_uptime_get_32();
    
    if (is_typing) {
        // Start frame animation
        widget->state.current_frame = 1;
    } else {
        widget->state.current_frame = 0;
    }
    
    draw_cat(widget);
}

int zmk_widget_bongocat_init(struct zmk_widget_bongocat *widget, lv_obj_t *parent) {
    widget->obj = lv_obj_create(parent);
    lv_obj_set_size(widget->obj, 80, 64); // Adjust size for nice!view
    
    widget->img = lv_img_create(widget->obj);
    lv_img_set_src(widget->img, &idle_cat);
    lv_obj_align(widget->img, LV_ALIGN_CENTER, 0, 0);
    
    widget->state = (struct state){
        .is_typing = false,
        .current_frame = 0,
        .last_press = 0
    };
    
    // Create animation timer
    widget->timer = lv_timer_create(animation_timer_cb, FRAME_DURATION, widget);
    
    sys_slist_append(&widgets, &widget->node);
    
    return 0;
}

static void keycode_update_cb(struct zmk_keycode_state_changed *ev) {
    struct zmk_widget_bongocat *widget;
    
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) {
        if (ev->state) { // Key pressed
            set_typing_state(widget, true);
        }
    }
}

ZMK_DISPLAY_WIDGET_LISTENER(widget_bongocat, struct zmk_keycode_state_changed,
                           keycode_update_cb, zmk_keycode_state_changed);
ZMK_SUBSCRIPTION(widget_bongocat, zmk_keycode_state_changed);

lv_obj_t *zmk_widget_bongocat_obj(struct zmk_widget_bongocat *widget) {
    return widget->obj;
}
