#include "uart.h"
#include "led.h"
#include "servo.h"

int main(){
	LedInit();
	UART_InitWithInt(9600);
	ServoInit(50);

	while(1){
		if(cOdebranyZnak == 'c'){
			ServoCallib();
			cOdebranyZnak = 0;
		}
		else if(cOdebranyZnak == '1'){
			ServoGoTo(sServo.uiDesiredPosition + 12);
			cOdebranyZnak = 0;
		}
		else if(cOdebranyZnak == '2'){
			ServoGoTo(24);
		}
		else if(cOdebranyZnak == '3'){
			ServoGoTo(36);
		}
	}
}
