#include <zephyr/kernel.h>
#include <lvgl.h>
#include <zmk/display.h>
#include <zmk/event_manager.h>
#include <zmk/events/wpm_state_changed.h>
#include <zmk/wpm.h>
#include "bongocat.h"
#include "util.h"

static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);

struct wpm_state {
    uint8_t wpm;
};

static void set_animation_state(struct zmk_widget_bongocat *widget, bool use_left) {
    const lv_img_dsc_t* frame;
    
    if (widget->is_typing) {
        frame = use_left ? &bongocat_left : &bongocat_right;
    } else {
        frame = &bongocat_default;
    }

    // Only update if frame changed
    if (widget->current_frame != frame) {
        widget->current_frame = frame;
        lv_img_set_src(widget->obj, frame);
    }
}

static void handle_wpm_state_changed(struct zmk_widget_bongocat *widget, struct wpm_state state) {
    bool was_typing = widget->is_typing;
    widget->is_typing = (state.wpm > 0);
    
    // If we just started typing or are still typing, alternate frames
    if (widget->is_typing) {
        widget->use_left = !widget->use_left;
    }
    
    set_animation_state(widget, widget->use_left);
}

static void wpm_state_changed_cb(struct wpm_state state) {
    struct zmk_widget_bongocat *widget;
    
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) {
        handle_wpm_state_changed(widget, state);
    }
}

static struct wpm_state wpm_state_get_state(const zmk_event_t *eh) {
    return (struct wpm_state){.wpm = zmk_wpm_get_state()};
}

ZMK_DISPLAY_WIDGET_LISTENER(widget_bongocat, struct wpm_state, wpm_state_changed_cb, wpm_state_get_state);
ZMK_SUBSCRIPTION(widget_bongocat, zmk_wpm_state_changed);

int zmk_widget_bongocat_init(struct zmk_widget_bongocat *widget, lv_obj_t *parent) {
    widget->obj = lv_img_create(parent);
    lv_img_set_src(widget->obj, &bongocat_default);
    
    widget->is_typing = false;
    widget->use_left = false;
    widget->current_frame = &bongocat_default;
    
    sys_slist_append(&widgets, &widget->node);
    return 0;
}

lv_obj_t *zmk_widget_bongocat_obj(struct zmk_widget_bongocat *widget) {
    return widget->obj;
}
