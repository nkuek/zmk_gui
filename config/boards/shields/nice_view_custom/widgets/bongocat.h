/*
 * Copyright (c) 2024 The ZMK Contributors
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <lvgl.h>
#include <zephyr/kernel.h>
#include <zmk/events/keycode_state_changed.h>

struct zmk_widget_bongocat {
    sys_snode_t node;
    lv_obj_t *obj;
    lv_obj_t *img;
    struct bongocat_widget_data {
        enum bongocat_state state;
        uint8_t frame;
        uint32_t last_keypress;
    } data;
};

int zmk_widget_bongocat_init(struct zmk_widget_bongocat *widget, lv_obj_t *parent);
int zmk_widget_bongocat_process_keycode_state_changed(struct zmk_widget_bongocat *widget,
                                                    struct zmk_keycode_state_changed *ev);
lv_obj_t *zmk_widget_bongocat_obj(struct zmk_widget_bongocat *widget);
