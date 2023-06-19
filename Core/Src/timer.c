/*
 * timer.c
 *
 *  Created on: Apr 27, 2023
 *      Author: Admin
 *
 */
#include "stm32f1xx_hal.h"
#include <stdint.h>
#include"prototype.h"

extern TIM_HandleTypeDef htim1;





void Delayd (uint16_t delay)
{

	__HAL_TIM_SET_COUNTER(&htim1,0);
	while( __HAL_TIM_GET_COUNTER(&htim1) < delay);



}



