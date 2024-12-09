#pragma once

#include <lvgl.h>
#include <zephyr/kernel.h>

extern const lv_img_dsc_t bongocat_default;
extern const lv_img_dsc_t bongocat_left;
extern const lv_img_dsc_t bongocat_right;
extern const lv_img_dsc_t bongocat_both;

struct zmk_widget_bongocat {
    sys_snode_t node;
    lv_obj_t *obj;
    bool left_pressed;
    bool right_pressed;
    const lv_img_dsc_t* current_frame;
};

int zmk_widget_bongocat_init(struct zmk_widget_bongocat *widget, lv_obj_t *parent);
lv_obj_t *zmk_widget_bongocat_obj(struct zmk_widget_bongocat *widget);
