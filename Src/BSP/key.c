#include "pubData.h"





//Test Functions
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

keyState_TypeDef keyReadState(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, uint8_t keyCode){
	if(keysState[keyCode] == HAL_GPIO_ReadPin(GPIOx, GPIO_Pin)){
		return keysState[keyCode];
	}else{
		HAL_Delay(20);
		if(HAL_GPIO_ReadPin(GPIOx, GPIO_Pin) == keysState[keyCode]){
				return keysState[keyCode];
		}else{
			switch(keysState[keyCode]){
				case keyDown:
					return keysState[keyCode] = keyUp;
				case keyUp:
					return keysState[keyCode] = keyDown;
				default:
					return keyUp;
			}
		}
	}
}


//Utilities Functions
void keyBlockingTest(void){
	if(keyReadState_Blocking(key1_GPIO_Port, key1_Pin) == keyDown){
		led1_T;
	}else if(keyReadState_Blocking(key2_GPIO_Port, key2_Pin) == keyDown){
		if(RGB.r == true){
			RGB.r = true;
		}else{
			RGB.r = false;
		}
	}else if(keyReadState_Blocking(key3_GPIO_Port, key3_Pin) == keyDown){
		if(RGB.g == false){
			RGB.g = true;
		}else{
			RGB.g = false;
		}
	}else if(keyReadState_Blocking(key4_GPIO_Port, key4_Pin) == keyDown){
		if(RGB.b == false){
			RGB.b = true;
		}else{
			RGB.b = false;
		}
	}
}


void keyNonblockingTest(void){
	if(keyReadState(key1_GPIO_Port, key1_Pin, 0) == keyDown){
		led1_L;
	}else{
		led1_H;
	}
	
	if(keyReadState(key2_GPIO_Port, key2_Pin, 1) == keyDown){
		RGB.r = true;
	}else{
		RGB.r = false;
	}
	
	if(keyReadState(key3_GPIO_Port, key3_Pin, 2) == keyDown){
		RGB.g = true;
	}else{
		RGB.g = false;
	}
	
	if(keyReadState(key4_GPIO_Port, key4_Pin, 3) == keyDown){
		RGB.b = true;
	}else{
		RGB.b = false;
	}
}
