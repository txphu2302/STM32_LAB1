/*
 * Ex9.c
 *
 *  Created on: Sep 24, 2024
 *      Author: Acer
 */

#include "Ex9.h"

void clearNumberOnClock(int num)
{
 // TODO
	switch(num)
	{
	case 0:
		HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
		break;
	case 1:
		HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, RESET);
		break;
	case 8:
		HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, RESET);
		break;
	case 10:
		HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, RESET);
		break;
	case 11:
		HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, RESET);
		break;
	}
}

void ex9()
{
	clearNumberOnClock(2);

}

