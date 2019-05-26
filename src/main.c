/*
 * This is a basic template for STM32F407VGT6
 */
#include "main.h"

static void prvSetupHardware(void);
void hLedInit(void);

int main(void)
{
	// TODO: check system core clock proper configuration
	// Hardware configuration:
	prvSetupHardware();

	// Creating Tasks:
	xTaskCreate( vLedTask, "LedTask", configMINIMAL_STACK_SIZE, NULL, tsLED_TASK_PRIORITY, NULL);
	// Start the scheduler:
	vTaskStartScheduler();

	// Will only get here if there was not enough heap size:
	while(1)
	return 0;
}

void hLedInit(void)
{
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN; 	// Enable clock for GPIO PORT D
	gpio_pin_cfg(GPIOD, PIN_LED_GREEN, gpio_mode_output_PP_FS); // GPIO config for LED GREEN
}

void vLedTask(void* pvParameters)
{
	for(;;){
		//BB(GPIOD->ODR, PIN_LED_GREEN) ^= 1;
		GPIO_TOGGLE(GPIOD, PIN_LED_GREEN);
		vTaskDelay(100 / portTICK_RATE_MS);
	}

	vTaskDelete(NULL);
}

static void prvSetupHardware(void)
{
	hLedInit();
}


