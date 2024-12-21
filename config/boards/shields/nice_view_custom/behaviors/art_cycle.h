#pragma once

#include <zephyr/kernel.h>
#include <zmk/behavior.h>

struct behavior_art_cycle_config {
    char placeholder;  // Empty struct needs at least one member
};

struct behavior_art_cycle_data {
    bool pressed;
};

extern const struct zmk_behavior_impl behavior_art_cycle;
