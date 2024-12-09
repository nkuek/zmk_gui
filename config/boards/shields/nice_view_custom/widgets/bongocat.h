/*
 * Copyright (c) 2024 The ZMK Contributors
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <lvgl.h>
#include <zephyr/kernel.h>
#include <zmk/events/keycode_state_changed.h>

enum bongocat_state {
    BONGOCAT_STATE_IDLE,
    BONGOCAT_STATE_TYPING
};

struct zmk_widget_bongocat {
    sys_snode_t node;
    lv_obj_t *obj;
    lv_obj_t *img;
    struct {
        enum bongocat_state state;
        uint8_t frame;
        uint32_t last_keypress;
    } data;
};

// Frame image declarations - defined in bongocat_frames.c
extern const lv_img_dsc_t idle_cat;
extern const lv_img_dsc_t tap_cat_1;
extern const lv_img_dsc_t tap_cat_2;

int zmk_widget_bongocat_init(struct zmk_widget_bongocat *widget, lv_obj_t *parent);
int zmk_widget_bongocat_process_keycode_state_changed(struct zmk_widget_bongocat *widget,
                                                    const struct zmk_keycode_state_changed *ev);
lv_obj_t *zmk_widget_bongocat_obj(struct zmk_widget_bongocat *widget);
