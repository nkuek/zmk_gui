#pragma once

#include <lvgl.h>
#include <zephyr/kernel.h>
#include "util.h"
#include "bongocat.h"

struct zmk_widget_status {
    sys_snode_t node;
    lv_obj_t *obj;
    lv_color_t cbuf[CANVAS_SIZE * CANVAS_SIZE];
    struct status_state state;
    struct zmk_widget_bongocat *bongocat;
};

void peripheral_status_cycle_image(void);
void peripheral_status_toggle_auto(void);

int zmk_widget_status_init(struct zmk_widget_status *widget, lv_obj_t *parent);
lv_obj_t *zmk_widget_status_obj(struct zmk_widget_status *widget);
