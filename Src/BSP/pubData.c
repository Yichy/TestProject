/*User creaded custum data and code*/

#include "pubData.h"

struct RGB_Type RGB = {false, false, false};

void rgbColor(void){
	
	if(RGB.r){
		ledR_L;
		ledR_H;
	}
	if(RGB.g){
		ledG_L;
		ledG_H;
	}
	if(RGB.b){
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
