/*
 * Copyright (c) 2024 The ZMK Contributors
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <lvgl.h>
#include <zephyr/kernel.h>

enum bongocat_state {
    BONGOCAT_STATE_IDLE,
    BONGOCAT_STATE_LEFT_SIDE,
    BONGOCAT_STATE_RIGHT_SIDE,
    BONGOCAT_STATE_BOTH_SIDES
};

struct zmk_widget_bongocat {
    sys_snode_t node;
    lv_obj_t *obj;
    lv_obj_t *img;
    lv_obj_t *wpm_label;
    struct {
        enum bongocat_state state;
        uint32_t last_keypress;
        bool left_active;
        bool right_active;
        uint8_t wpm;
    } data;
};

extern const lv_img_dsc_t bongocat_default;
extern const lv_img_dsc_t bongocat_left;
extern const lv_img_dsc_t bongocat_right;
extern const lv_img_dsc_t bongocat_both;

int zmk_widget_bongocat_init(struct zmk_widget_bongocat *widget, lv_obj_t *parent);
lv_obj_t *zmk_widget_bongocat_obj(struct zmk_widget_bongocat *widget);
