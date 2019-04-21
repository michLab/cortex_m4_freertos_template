/*
 * This is a basic template for STM32F407VGT6
 */
#include "main.h"
#include "FreeRTOS.h"
#include "task.h"

static void prvSetupHardware(void);

int main(void)
{
	// Hardware configuration:
	prvSetupHardware();

	// Creating Tasks:

	// Start the scheduler:
	vTaskStartScheduler();

	// Will only get here if there was not enough heap size:
	while(1)
	return 0;
}

static void prvSetupHardware(void)
{

}
