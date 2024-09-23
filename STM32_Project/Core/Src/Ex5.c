/*
 * Ex5.c
 *
 *  Created on: Sep 23, 2024
 *      Author: Acer
 */


#include "Ex5.h"


int num = 0;
int red = 5;

void displayLED()
{
	if (num == 10) num = 0;
	else if (num < 2)
	{
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, SET);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, SET);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
			HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, SET);
			HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, SET);
			HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, RESET);
			HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, RESET);
			HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, RESET);
			HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, RESET);
		}
	else if (num >= 2 && num < 5)
		{
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, SET);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, SET);
			HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, RESET);
			HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, SET);
			HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, RESET);
			HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, RESET);
			HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, RESET);
			HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, SET);
		}
	else if (num >= 5 && num < 7)
		{
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, SET);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
			HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, RESET);
			HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, RESET);
			HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, RESET);
			HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, SET);
			HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, SET);
			HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, RESET);
		}
	else if (num >= 8 && num < 10)
		{
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, SET);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, SET);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
			HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, RESET);
			HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, RESET);
			HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, SET);
			HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, RESET);
			HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, SET);
			HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, RESET);
		}

		num++;

}

void ex5()
{
	if(red <= 0) red = 5;
	display7SEG(red--);
}
