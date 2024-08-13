idf_component_register(SRCS "wifi_prov.c"
                    INCLUDE_DIRS "."
                    REQUIRES freertos log esp_wifi esp_event nvs_flash wifi_provisioning espressif__qrcode)