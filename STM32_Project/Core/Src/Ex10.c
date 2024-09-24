/*
 * Ex10.c
 *
 *  Created on: Sep 25, 2024
 *      Author: Acer
 */
#include "Ex10.h"

void setNumberOnClock(int num){
// TODO
	switch(num)
	{
	case 0:
		HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, SET);
		break;
	case 1:

		HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, SET);

		break;
	case 2:
		HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, SET);
		break;
	case 3:
		HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
		break;
	case 4:
		HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, SET);
		break;
	case 5:
		HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, SET);
		break;
	case 6:
		HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, SET);
		break;
	case 7:
		HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, SET);
		break;
	case 9:
		HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, SET);
		break;
	case 10:
		HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, SET);
		break;
	case 11:
		HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, SET);
		break;
	}
}

int hour = 0;
int minute = 0;
int second = 0;

void ex10()
{

	if (second == 60)
	{
		if ((second - 5) / 5 != hour && (second - 5) / 5 != minute / 5)
		{
			clearNumberOnClock((second - 5) / 5);
		}
		setNumberOnClock(0);
		minute++;
		second = 0;
	}
	else if (second % 5 == 0)
	{
		if ((second - 5) / 5 != hour && (second - 5) / 5 != minute / 5)
		{
			clearNumberOnClock((second - 5) /5);
		}
		setNumberOnClock(second / 5);
	}
	if (minute == 60)
	{
		if ((minute - 5) / 5 != hour)
		{
			clearNumberOnClock((minute - 5) /5);
		}
		setNumberOnClock(0);
		minute = 0;
		hour++;
		if (hour == 12) hour = 0;
		clearNumberOnClock(hour - 1);
		setNumberOnClock(hour);
	}
	else if (minute % 5 == 0)
	{
		if ((minute - 5) / 5 != hour)
		{
			clearNumberOnClock((minute - 5) / 5);
		}
		setNumberOnClock(minute / 5);
	}

	second++;
}


