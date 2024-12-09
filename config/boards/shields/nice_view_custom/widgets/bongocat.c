#include <lvgl.h>
#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>

LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

#include "bongocat.h"

extern const lv_img_dsc_t bongocat_default;
extern const lv_img_dsc_t bongocat_left;
extern const lv_img_dsc_t bongocat_right;
extern const lv_img_dsc_t bongocat_both;

LV_IMG_DECLARE(bongocat_default);
LV_IMG_DECLARE(bongocat_left);
LV_IMG_DECLARE(bongocat_right);
LV_IMG_DECLARE(bongocat_both);

struct bongocat_state {
    enum bongocat_animation_state {
        BONGOCAT_DEFAULT,
        BONGOCAT_LEFT,
        BONGOCAT_RIGHT,
        BONGOCAT_BOTH
    } current_state;
};

static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);

static void set_animation_state(struct zmk_widget_bongocat *widget, struct bongocat_state state) {
    const lv_img_dsc_t* frame;
    
    switch (state.current_state) {
        case BONGOCAT_LEFT:
            frame = &bongocat_left;
            break;
        case BONGOCAT_RIGHT:
            frame = &bongocat_right;
            break;
        case BONGOCAT_BOTH:
            frame = &bongocat_both;
            break;
        default:
            frame = &bongocat_default;
            break;
    }

    lv_img_set_src(widget->obj, frame);
}

int zmk_widget_bongocat_init(struct zmk_widget_bongocat *widget, lv_obj_t *parent) {
    widget->obj = lv_img_create(parent);
    lv_img_set_src(widget->obj, &bongocat_default);
    
    sys_slist_append(&widgets, &widget->node);

    return 0;
}

lv_obj_t *zmk_widget_bongocat_obj(struct zmk_widget_bongocat *widget) {
    return widget->obj;
}

void zmk_widget_bongocat_set_state(struct zmk_widget_bongocat *widget, bool left_pressed, bool right_pressed) {
    struct bongocat_state state;
    
    if (left_pressed && right_pressed) {
        state.current_state = BONGOCAT_BOTH;
    } else if (left_pressed) {
        state.current_state = BONGOCAT_LEFT;
    } else if (right_pressed) {
        state.current_state = BONGOCAT_RIGHT;
    } else {
        state.current_state = BONGOCAT_DEFAULT;
    }
    
    set_animation_state(widget, state);
}
