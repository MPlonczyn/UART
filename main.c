#include "uart.h"
#include "led.h"
#include "servo.h"

int main(){
	LedInit();
	UART_InitWithInt(9600);
	ServoInit(50);
	

	while(1){
		switch(cOdebranyZnak){
			case 'c':
				ServoCallib();
				break;
			
			case '1':
				ServoGoTo(sServo.uiDesiredPosition + 12);
				break;
			
			case '2':
				ServoGoTo(24);
				break;
			
			case '3':
				ServoGoTo(36);
			break;
		}
	}
}

/*if(cOdebranyZnak == 'c'){
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
*/
