/*
 * main.h
 *
 *  Created on: Apr 20, 2019
 *      Author: michal
 */

#ifndef MAIN_H_
#define MAIN_H_

#include "stm32f4xx.h"
#include "bb.h"
#include "gpio.h"
#include "stm32f4discovery.h"
#include "FreeRTOS.h"
#include "task.h"

#define MAX_I	0x5FFFF

// Priorytety zadań:
#define tsLED_TASK_PRIORITY   ( tskIDLE_PRIORITY + 1 )

// Deklaracje zadań:
void vLedTask(void* pvParameters);

#endif /* MAIN_H_ */
