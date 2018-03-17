#ifndef __LED_H__
#define __LED_H__

#include "main.h"
#include "stm32f0xx_hal.h"
//-----------------------------------------------------------------------

//function init
void led1ChangeState(void);
//-----------------------------------------------------------------------

//led high low pin settings
#define led1_L HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_RESET);
#define led1_H HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, GIPO_PIN_SET);
#define led1_T HAL_GPIO_TogglePin(LED_1_GPIO_Port, LED_1_Pin);
//------------------------------------------------------------------------

#endif
