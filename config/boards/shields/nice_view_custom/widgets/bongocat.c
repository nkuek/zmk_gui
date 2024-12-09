/*
 * Copyright (c) 2024 The ZMK Contributors
 * SPDX-License-Identifier: MIT
 */

#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>

LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

#include <zmk/display.h>
#include <zmk/event_manager.h>
#include <zmk/events/position_state_changed.h>
#include <zmk/events/wpm_state_changed.h>
#include "bongocat.h"

static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);

#define KEYPRESS_TIMEOUT_MS 500
#define LEFT_SIDE_MAX_POSITION 35

static void set_frame(struct zmk_widget_bongocat *widget, const lv_img_dsc_t *frame) {
    lv_img_set_src(widget->img, frame);
}

static void draw_bongocat(struct zmk_widget_bongocat *widget) {
    switch (widget->data.state) {
        case BONGOCAT_STATE_IDLE:
            set_frame(widget, &bongocat_default);
            break;
        case BONGOCAT_STATE_LEFT_SIDE:
            set_frame(widget, &bongocat_left);
            break;
        case BONGOCAT_STATE_RIGHT_SIDE:
            set_frame(widget, &bongocat_right);
            break;
        case BONGOCAT_STATE_BOTH_SIDES:
            set_frame(widget, &bongocat_both);
            break;
    }

    char wpm_text[10];
    snprintf(wpm_text, sizeof(wpm_text), "%d WPM", widget->data.wpm);
    lv_label_set_text(widget->wpm_label, wpm_text);
}

static void animation_timer_handler(struct k_timer *dummy) {
    struct zmk_widget_bongocat *widget;
    uint32_t now = k_uptime_get_32();
    
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) {
        if (widget->data.state != BONGOCAT_STATE_IDLE && 
            (now - widget->data.last_keypress) > KEYPRESS_TIMEOUT_MS) {
            widget->data.state = BONGOCAT_STATE_IDLE;
            widget->data.left_active = false;
            widget->data.right_active = false;
            draw_bongocat(widget);
        }
    }
}

K_TIMER_DEFINE(animation_timer, animation_timer_handler, NULL);

int zmk_widget_bongocat_init(struct zmk_widget_bongocat *widget, lv_obj_t *parent) {
    widget->obj = lv_obj_create(parent);
    lv_obj_set_size(widget->obj, 160, 68);
    
    widget->img = lv_img_create(widget->obj);
    lv_img_set_src(widget->img, &bongocat_default);
    lv_obj_align(widget->img, LV_ALIGN_TOP_RIGHT, 0, 20);
    
    widget->wpm_label = lv_label_create(widget->obj);
    lv_obj_set_style_text_font(widget->wpm_label, &lv_font_montserrat_16, 0);
    lv_obj_set_style_text_color(widget->wpm_label, IS_ENABLED(CONFIG_NICE_VIEW_WIDGET_INVERTED) ? lv_color_white() : lv_color_black(), 0);
    lv_obj_align(widget->wpm_label, LV_ALIGN_BOTTOM_RIGHT, -5, -5);
    lv_label_set_text(widget->wpm_label, "0 WPM");
    
    widget->data.state = BONGOCAT_STATE_IDLE;
    widget->data.last_keypress = 0;
    widget->data.left_active = false;
    widget->data.right_active = false;
    widget->data.wpm = 0;
    
    sys_slist_append(&widgets, &widget->node);
    k_timer_start(&animation_timer, K_MSEC(50), K_MSEC(50));
    
    return 0;
}

static void update_state(struct zmk_widget_bongocat *widget) {
    if (widget->data.left_active && widget->data.right_active) {
        widget->data.state = BONGOCAT_STATE_BOTH_SIDES;
    } else if (widget->data.left_active) {
        widget->data.state = BONGOCAT_STATE_LEFT_SIDE;
    } else if (widget->data.right_active) {
        widget->data.state = BONGOCAT_STATE_RIGHT_SIDE;
    } else {
        widget->data.state = BONGOCAT_STATE_IDLE;
    }
    draw_bongocat(widget);
}

static void position_state_changed_handler(struct zmk_widget_bongocat *widget,
                                         struct zmk_position_state_changed *event) {
    widget->data.last_keypress = k_uptime_get_32();
    
    bool is_left_side = event->position < LEFT_SIDE_MAX_POSITION;
    if (is_left_side) {
        widget->data.left_active = event->state;
    } else {
        widget->data.right_active = event->state;
    }
    
    update_state(widget);
}

static void wpm_state_changed_handler(struct zmk_widget_bongocat *widget, uint8_t wpm) {
    widget->data.wpm = wpm;
    draw_bongocat(widget);
}

static void position_state_changed_cb(const zmk_event_t *eh) {
    struct zmk_position_state_changed *event = as_zmk_position_state_changed(eh);
    struct zmk_widget_bongocat *widget;
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) {
        position_state_changed_handler(widget, event);
    }
}

static void wpm_state_changed_cb(const zmk_event_t *eh) {
    const struct zmk_wpm_state_changed *ev = as_zmk_wpm_state_changed(eh);
    struct zmk_widget_bongocat *widget;
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) {
        wpm_state_changed_handler(widget, ev->state);
    }
}

ZMK_LISTENER(widget_bongocat, position_state_changed_cb);
ZMK_SUBSCRIPTION(widget_bongocat, zmk_position_state_changed);

ZMK_LISTENER(widget_wpm, wpm_state_changed_cb);
ZMK_SUBSCRIPTION(widget_wpm, zmk_wpm_state_changed);

lv_obj_t *zmk_widget_bongocat_obj(struct zmk_widget_bongocat *widget) {
    return widget->obj;
}
