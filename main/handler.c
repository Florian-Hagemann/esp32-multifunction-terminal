#include "handler.h"

#include "esp_log.h"

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"

static const char* TAG = "Handler";

void start_handler_task(void) {

    ESP_LOGI(TAG, "Starting handler task");
    // TODO: start handler task

}