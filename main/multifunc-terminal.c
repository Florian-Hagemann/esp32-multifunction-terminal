#include <stdio.h>

#include "handler.h"
#include "cli.h"

#include "esp_log.h"

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"

void app_main(void)
{
    start_cli_task();
    start_handler_task();
}
