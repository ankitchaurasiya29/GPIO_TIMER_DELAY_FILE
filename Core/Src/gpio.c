/*
 * gpio.c
 *
 *  Created on: Apr 13, 2023
 *      Author: Admin
 */
#include "stm32f1xx_hal.h"
#include "gpio.h"
#include <stdint.h>

void Delayd(uint16_t delay );

void led_blink(void)
{


	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_SET);
	  Delayd(60000);
	  Delayd(40000);
	  Delayd(60000);
	  Delayd(40000);

	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_RESET);
	  Delayd(40000);
	  Delayd(60000);
	  Delayd(60000);
	  Delayd(40000);

}

