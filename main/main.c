#include <stdio.h>
#include <string.h>

#include "ledc.h"
#include "wifi_prov.h"

void app_main(void)
{
    ledc_init();

    ESP_ERROR_CHECK(ledc_set_duty(LEDC_MODE, LEDC_CHANNEL, LEDC_DUTY));

    ESP_ERROR_CHECK(ledc_update_duty(LEDC_MODE, LEDC_CHANNEL));

    wifi_prov_task();
}
