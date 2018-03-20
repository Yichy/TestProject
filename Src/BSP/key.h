#ifndef __KEY_H__
#define __KEY_H__

#include "main.h"
#include "stm32f0xx_hal.h"

typedef enum{
	keyUp = GPIO_PIN_SET,
	keyDown = GPIO_PIN_RESET,
	keyHold = 2
}keyState_TypeDef;

//variables
static keyState_TypeDef keysState[4] = {keyUp, keyUp, keyUp, keyUp};

//functions init================================================================
keyState_TypeDef keyReadStaste_Blocking	(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
keyState_TypeDef keyReadState			(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, uint8_t keyCode);

void keyBlockingTest	(void);
void keyNonblockingTest	(void);

//------------------------------------------------------------------------------

#endif
