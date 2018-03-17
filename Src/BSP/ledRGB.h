#ifndef __LEDRGB_H__
#define __LEDRGB_H__

#include "main.h"
#include "stm32f0xx_hal.h"

//functions init==================================================
void ledRed		(void);
void ledGreen	(void);
void ledBlue	(void);


//----------------------------------------------------------------

//defines=========================================================
#define ledR_T HAL_GPIO_TogglePin	(LED_R_GPIO_Port, LED_R_Pin);
#define ledR_L HAL_GPIO_WritePin	(LED_R_GPIO_Port, LED_R_Pin, GPIO_PIN_RESET);
#define ledR_H HAL_GPIO_WritePin	(LED_R_GPIO_Port, LED_R_Pin, GPIO_PIN_SET);

#define ledG_T HAL_GPIO_TogglePin	(LED_G_GPIO_Port, LED_G_Pin);
#define ledG_L HAL_GPIO_WritePin	(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_RESET);
#define ledG_H HAL_GPIO_WritePin	(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_SET);

#define ledB_T HAL_GPIO_TogglePin	(LED_B_GPIO_Port, LED_B_Pin);
#define ledB_L HAL_GPIO_WritePin	(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_RESET);
#define ledB_H HAL_GPIO_WritePin	(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_SET);
//-----------------------------------------------------------------

#endif
