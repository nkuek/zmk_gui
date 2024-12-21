#define DT_DRV_COMPAT zmk_behavior_art_cycle

#include <zephyr/device.h>
#include <zephyr/logging/log.h>
#include <zmk/behavior.h>
#include <zmk/split/bluetooth/peripheral.h>

#include <behaviors/art_cycle.h>

LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

// Forward declaration of the peripheral_status_cycle_image function
extern void peripheral_status_cycle_image(void);

static int behavior_art_cycle_init(const struct device *dev) {
    LOG_DBG("Art cycle behavior init");
    return 0;
}

static int on_keymap_binding_pressed(struct zmk_behavior_binding *binding,
                                   struct zmk_behavior_binding_event event) {
    const struct device *dev = device_get_binding(binding->behavior_dev);
    struct behavior_art_cycle_data *data = dev->data;
    
    LOG_DBG("Art cycle press");
    
    if (zmk_split_bt_peripheral_is_connected()) {
        LOG_DBG("Peripheral connected, cycling image");
        peripheral_status_cycle_image();
    } else {
        LOG_DBG("Not a peripheral or not connected");
    }
    
    data->pressed = true;
    return ZMK_BEHAVIOR_OPAQUE;
}

static int on_keymap_binding_released(struct zmk_behavior_binding *binding,
                                    struct zmk_behavior_binding_event event) {
    const struct device *dev = device_get_binding(binding->behavior_dev);
    struct behavior_art_cycle_data *data = dev->data;
    
    LOG_DBG("Art cycle release");
    data->pressed = false;
    return ZMK_BEHAVIOR_OPAQUE;
}

static const struct behavior_driver_api behavior_art_cycle_driver_api = {
    .binding_pressed = on_keymap_binding_pressed,
    .binding_released = on_keymap_binding_released,
};

static struct behavior_art_cycle_data behavior_art_cycle_data;

DEVICE_DT_INST_DEFINE(0, behavior_art_cycle_init, NULL, &behavior_art_cycle_data,
                      NULL, APPLICATION, CONFIG_KERNEL_INIT_PRIORITY_DEFAULT,
                      &behavior_art_cycle_driver_api);
