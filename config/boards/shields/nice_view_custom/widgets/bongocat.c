#include <zephyr/kernel.h>
#include <lvgl.h>
#include <zmk/event_manager.h>
#include <zmk/events/position_state_changed.h>
#include "bongocat.h"
#include "util.h"

static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);

static void set_animation_state(struct zmk_widget_bongocat *widget, bool left_pressed, bool right_pressed) {
    const lv_img_dsc_t* frame;
    
    // Determine which frame to show
    if (left_pressed && right_pressed) {
        frame = &bongocat_both;
    } else if (left_pressed) {
        frame = &bongocat_left;
    } else if (right_pressed) {
        frame = &bongocat_right;
    } else {
        frame = &bongocat_default;
    }

    // Only update if frame changed
    if (widget->current_frame != frame) {
        widget->current_frame = frame;
        lv_img_set_src(widget->obj, frame);
    }
}

static void handle_position_state_changed(struct zmk_widget_bongocat *widget, const struct zmk_position_state_changed *ev) {
    bool is_right = (ev->position % 12) >= 15;
    
    if (is_right) {
        widget->right_pressed = ev->state;
    } else {
        widget->left_pressed = ev->state;
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
    widget->obj = lv_img_create(parent);
    lv_img_set_src(widget->obj, &bongocat_default);
    
    widget->left_pressed = false;
    widget->right_pressed = false;
    widget->current_frame = &bongocat_default;
    
    sys_slist_append(&widgets, &widget->node);
    return 0;
}

lv_obj_t *zmk_widget_bongocat_obj(struct zmk_widget_bongocat *widget) {
    return widget->obj;
}
