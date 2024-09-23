#include "Ex1.h"

int count = 0;
void ex1()
{
	if (count == 4) count = 0;
	if (count < 2)
	{
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	}
	if (count >= 2)
	{
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
	}
	count++;

}
