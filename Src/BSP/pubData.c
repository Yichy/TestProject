/*User creaded custum data and code*/

#include "pubData.h"

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
