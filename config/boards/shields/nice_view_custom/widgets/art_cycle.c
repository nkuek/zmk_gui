#include <zmk/behavior.h>
#include "peripheral_status.h"

static int art_cycle_action(struct zmk_behavior_binding *binding, struct zmk_behavior_state *state) {
    if (state->pressed) {
        peripheral_status_cycle_image();
    }
    return ZMK_BEHAVIOR_OPAQUE;
}

static int art_auto_action(struct zmk_behavior_binding *binding, struct zmk_behavior_state *state) {
    if (state->pressed) {
        peripheral_status_toggle_auto();
    }
    return ZMK_BEHAVIOR_OPAQUE;
}

ZMK_BEHAVIOR_IMPL(art_cycle, NULL, art_cycle_action);
ZMK_BEHAVIOR_IMPL(art_auto, NULL, art_auto_action);
