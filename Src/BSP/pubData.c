/*User creaded custum data and code*/

#include "pubData.h"

RGB_TypeDef RGB = {0, 0, 0};

void rgbColor(void){
	
	if(RGB.r == 1){
		ledR_L;
		ledR_H;
	}
	if(RGB.g == 1){
		ledG_L;
		ledG_H;
	}
	if(RGB.b == 1){
		ledB_L;
		ledB_H;
	}
}


void ledAllFlash(void)
{
	led1ChangeState();
	ledRed();
	HAL_Delay(1000);
	led1ChangeState();
	ledGreen();
	HAL_Delay(1000);
	led1ChangeState();
	ledBlue();
	HAL_Delay(1000);
}
