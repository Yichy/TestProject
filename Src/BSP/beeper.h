#ifndef __BEEPER_H__
#define __BEEPER_H__

#include "main.h"
#include "stm32f0xx_hal.h"

#define beepH HAL_GPIO_WritePin	(BPR_GPIO_Port, BPR_Pin, GPIO_PIN_SET);
#define beepL HAL_GPIO_WritePin	(BPR_GPIO_Port, BPR_Pin, GPIO_PIN_RESET);
#define beepT HAL_GPIO_TogglePin(BPR_GPIO_Port, BPR_Pin);

//functions init===================================================
void beepSwitch(void);
//-----------------------------------------------------------------

#endif
