#ifndef LEDC_H
#define LEDC_H

#include "driver/ledc.h"
#include "esp_err.h"

// Constant LEDC configurations
#define LEDC_TIMER         LEDC_TIMER_0
#define LEDC_MODE          LEDC_LOW_SPEED_MODE
#define LEDC_OUTPUT_IO     (17)
#define LEDC_CHANNEL       LEDC_CHANNEL_0
#define LEDC_DUTY_RES      LEDC_TIMER_13_BIT
#define LEDC_DUTY          (4096)
#define LEDC_FREQUENCY     (4000)

// declaration of functions
void ledc_init(void);

#endif