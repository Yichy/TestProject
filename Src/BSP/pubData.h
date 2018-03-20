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
#define bool int
#define true 1
#define false 0


extern struct RGB_Type{
	int r;
	int g;
	int b;
}RGB;

//-----------------------------------------------------------

//init functions=============================================
void ledAllFlash(void);
void rgbColor(void);

//-----------------------------------------------------------

#endif
