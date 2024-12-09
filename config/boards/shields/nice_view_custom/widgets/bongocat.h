#pragma once

#include <lvgl.h>
#include <zephyr/kernel.h>

struct zmk_widget_bongocat {
    sys_snode_t node;
    lv_obj_t *obj;
};

int zmk_widget_bongocat_init(struct zmk_widget_bongocat *widget, lv_obj_t *parent);
lv_obj_t *zmk_widget_bongocat_obj(struct zmk_widget_bongocat *widget);
void zmk_widget_bongocat_set_state(struct zmk_widget_bongocat *widget, bool left_pressed, bool right_pressed);
