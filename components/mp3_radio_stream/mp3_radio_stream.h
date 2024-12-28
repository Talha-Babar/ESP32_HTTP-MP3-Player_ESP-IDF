#include <stdio.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/i2s.h"
#include "esp_system.h"
#include "esp_log.h"
#include "esp_event.h"
#include "esp_wifi.h"
#include "esp_http_client.h"
#include "nvs_flash.h"
#include "mp3_decoder.h"
#include "esp_netif.h"

void PlayMP3Stream(const char *url);
// void init_i2s_audio_output(i2s_port_t i2s_port, int bck_pin, int ws_pin, int data_out_pin);