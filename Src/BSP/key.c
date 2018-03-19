#include "pubData.h"



keyState_TypeDef k1State = keyUp, k2State = keyUp, k3State = keyUp, k4State = keyUp;

keyState_TypeDef keyReadState_Blocking(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin)
{
	if(HAL_GPIO_ReadPin(GPIOx, GPIO_Pin) == GPIO_PIN_RESET){
		HAL_Delay(20);
		if(HAL_GPIO_ReadPin(GPIOx, GPIO_Pin) == GPIO_PIN_RESET){
			while(HAL_GPIO_ReadPin(GPIOx, GPIO_Pin) == GPIO_PIN_RESET)
			{
				beep_H;
			}
			beep_L;
			return keyDown;
		}
	}
	
	return keyUp;
}



void keyBlockingTest(void){
	if(keyReadState_Blocking(key1_GPIO_Port, key1_Pin) == keyDown){
		led1_T;
	}else if(keyReadState_Blocking(key2_GPIO_Port, key2_Pin) == keyDown){
		if(RGB.r == 0){
			RGB.r = 1;
		}else{
			RGB.r = 0;
		}
	}else if(keyReadState_Blocking(key3_GPIO_Port, key3_Pin) == keyDown){
		if(RGB.g == 0){
			RGB.g = 1;
		}else{
			RGB.g = 0;
		}
	}else if(keyReadState_Blocking(key4_GPIO_Port, key4_Pin) == keyDown){
		if(RGB.b == 0){
			RGB.b = 1;
		}else{
			RGB.b = 0;
		}
	}
}
