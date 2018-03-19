#ifndef __KEY_H__
#define __KEY_H__

#include "main.h"
#include "stm32f0xx_hal.h"

typedef enum{
	keyUp = 0,
	keyDown = 1,
	keyHold = 2
}keyState_TypeDef;

//functions init================================================================
keyState_TypeDef keyReadStaste_Blocking(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
void keyBlockingTest(void);

//------------------------------------------------------------------------------

#endif
