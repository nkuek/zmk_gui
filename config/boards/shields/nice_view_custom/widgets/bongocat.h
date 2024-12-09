/*
 * Copyright (c) 2024 The ZMK Contributors
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <lvgl.h>
#include <zephyr/kernel.h>

struct zmk_widget_bongocat {
    sys_snode_t node;
    lv_obj_t *obj;
    lv_obj_t *img;
    lv_timer_t *timer;
    struct state {
        bool is_typing;
        uint8_t current_frame;
        uint32_t last_press;
    } state;
};

int zmk_widget_bongocat_init(struct zmk_widget_bongocat *widget, lv_obj_t *parent);
lv_obj_t *zmk_widget_bongocat_obj(struct zmk_widget_bongocat *widget);
