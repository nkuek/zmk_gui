#pragma once

#include <zephyr/kernel.h>
#include <zmk/behavior.h>

struct behavior_art_cycle_config {
    uint32_t param1;
};

struct behavior_art_cycle_data {
    bool pressed;
};

// Declare behavior struct
extern const struct zmk_behavior_impl behavior_art_cycle;
