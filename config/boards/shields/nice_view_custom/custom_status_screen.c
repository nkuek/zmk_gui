/*
 *
 * Copyright (c) 2023 The ZMK Contributors
 * SPDX-License-Identifier: MIT
 *
 */

#include "widgets/status.h"
#include "widgets/bongocat.h"

#include <zephyr/logging/log.h>
LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

#if IS_ENABLED(CONFIG_ZMK_SPLIT_ROLE_CENTRAL)
static struct zmk_widget_status status_widget;
#else
static struct zmk_widget_status status_widget;
static struct zmk_widget_bongocat bongocat_widget;
#endif

lv_obj_t *zmk_display_status_screen() {
    lv_obj_t *screen;
    screen = lv_obj_create(NULL);

#if IS_ENABLED(CONFIG_ZMK_SPLIT_ROLE_CENTRAL)
    zmk_widget_status_init(&status_widget, screen);
    lv_obj_align(zmk_widget_status_obj(&status_widget), LV_ALIGN_CENTER, 0, 0);
#else
    zmk_widget_status_init(&status_widget, screen);
    lv_obj_align(zmk_widget_status_obj(&status_widget), LV_ALIGN_TOP_MID, 0, 0);

    zmk_widget_bongocat_init(&bongocat_widget, screen);
    lv_obj_align(zmk_widget_bongocat_obj(&bongocat_widget), LV_ALIGN_BOTTOM_MID, 0, 0);
#endif

    return screen;
}
