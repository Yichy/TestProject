#ifndef __PUBDATA_H__
#define __PUBDATA_H__

#include "main.h"
#include "stm32f0xx_hal.h"
#include "gpio.h"

#include "led.h"
#include "ledRGB.h"
#include "beeper.h"
#include "key.h"


//public variables===========================================
typedef struct{
	int r;
	int g;
	int b;
}RGB_TypeDef;

extern RGB_TypeDef RGB;
//-----------------------------------------------------------

//init functions=============================================
void ledAllFlash(void);
void rgbColor(void);

//-----------------------------------------------------------

#endif
