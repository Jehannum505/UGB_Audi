#pragma once
#include "driver/twai.h"

#define CAN_TX_GPIO     (gpio_num_t)6
#define CAN_RX_GPIO     (gpio_num_t)17

#define CANBUS_SPEED    500000   // 500kbps

void canbus_init();