#include <zephyr/kernel.h>
#include <lvgl.h>
#include <zmk/event_manager.h>
#include <zmk/events/position_state_changed.h>
#include "bongocat.h"
#include "util.h"

static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);

static void set_animation_state(struct zmk_widget_bongocat *widget, bool left_pressed, bool right_pressed) {
    const lv_img_dsc_t* frame;
    
    if (left_pressed && right_pressed) {
        frame = &bongocat_both;
    } else if (left_pressed) {
        frame = &bongocat_left;
    } else if (right_pressed) {
        frame = &bongocat_right;
    } else {
        frame = &bongocat_default;
    }

    // Clear canvas
    lv_draw_rect_dsc_t rect_dsc;
    init_rect_dsc(&rect_dsc, LVGL_BACKGROUND);
    lv_canvas_draw_rect(widget->obj, 0, 0, 68, 69, &rect_dsc);

    // Draw bongocat frame
    lv_draw_img_dsc_t img_dsc;
    lv_draw_img_dsc_init(&img_dsc);
    lv_canvas_draw_img(widget->obj, 0, 0, frame, &img_dsc);

    // Rotate canvas
    rotate_canvas(widget->obj, widget->cbuf);
}

static void handle_position_state_changed(struct zmk_widget_bongocat *widget, const struct zmk_position_state_changed *ev) {
    int col = ev->position % 12;
    bool is_left = col >= 6;  // Columns 6-11 are left side
    
    if (is_left) {
        widget->left_pressed = ev->state;
    } else {
        widget->right_pressed = ev->state;
    }
    
    set_animation_state(widget, widget->left_pressed, widget->right_pressed);
}

static void position_state_changed_cb(zmk_event_t *eh) {
    struct zmk_widget_bongocat *widget;
    const struct zmk_position_state_changed *ev = as_zmk_position_state_changed(eh);
    if (!ev) return;
    
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) {
        handle_position_state_changed(widget, ev);
    }
}

ZMK_LISTENER(widget_bongocat, position_state_changed_cb);
ZMK_SUBSCRIPTION(widget_bongocat, zmk_position_state_changed);

int zmk_widget_bongocat_init(struct zmk_widget_bongocat *widget, lv_obj_t *parent) {
    widget->obj = lv_canvas_create(parent);
    lv_obj_set_size(widget->obj, 68, 68);
    lv_canvas_set_buffer(widget->obj, widget->cbuf, 68, 69, LV_IMG_CF_TRUE_COLOR);
    
    widget->left_pressed = false;
    widget->right_pressed = false;
    
    // Initialize with default frame
    set_animation_state(widget, false, false);
    
    sys_slist_append(&widgets, &widget->node);

    return 0;
}

lv_obj_t *zmk_widget_bongocat_obj(struct zmk_widget_bongocat *widget) {
    return widget->obj;
}
