#pragma once

#include <lvgl.h>
#include <zephyr/kernel.h>
#include "util.h"
#include "bongocat.h"

struct peripheral_status_state {
    bool connected;
    bool left_pressed;
    bool right_pressed;
};

struct zmk_widget_status {
    sys_snode_t node;
    lv_obj_t *obj;
    lv_color_t cbuf[CANVAS_SIZE * CANVAS_SIZE];
    struct status_state state;
    struct peripheral_status_state peripheral_state;
    struct zmk_widget_bongocat *bongocat;
};

int zmk_widget_status_init(struct zmk_widget_status *widget, lv_obj_t *parent);
lv_obj_t *zmk_widget_status_obj(struct zmk_widget_status *widget);
