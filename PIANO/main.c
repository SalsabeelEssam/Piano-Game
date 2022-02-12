/*
 * main.c
 *
 *  Created on: Jun 8, 2021
 *      Author: Salsabeel Essam
 */

#include"STD_TYPE.h"
#include"BIT_MATH.h"
#include"DIO_INTERFACE.h"
#include"TIMER_Interface.h"
#include"GIE_Interface.h"
#include"KEYPAD_Interface.h"
#include<avr/delay.h>

int main(void) {
	u8 key = 0;
	DIO_SetPinDirection(PORTB, PIN3, OUTPUT);
	//DIO_SetPinValue(PORTB, PIN3, LOW);
//	DIO_SetPinDirection(PORTD, PIN5, OUTPUT);  //PWM IN CHANNEL A
//	DIO_SetPinValue(PORTD, PIN5, LOW);

	TIMER0_VoidINT();

//	GIE_VoidEnable();

	while (1) {

		key = KEYPAD_U8GetPressedKey();
		 if (key >= 0 && key <= 3) {
			 SET_Duty_Cycle_TIMER0(80);
			SET_f1_TIMER1();
//			_delay_ms(1000);
		} else if (key >= 4 && key <= 6) {
			SET_Duty_Cycle_TIMER0(40);
			SET_f2_TIMER1();
//			_delay_ms(1000);
		} else if (key >= 7 && key <= 9) {
			SET_Duty_Cycle_TIMER0(60);
			SET_f3_TIMER1();
//			_delay_ms(1000);
		} else  if ( key == '-' || key == '+'||key == '/'||key == '*'||key == '='||key == 13){
			SET_Duty_Cycle_TIMER0(80);
			SET_f4_TIMER1();
//			_delay_ms(1000);
		}
		else{
			SET_Duty_Cycle_TIMER0(0);
		}
//		_delay_ms(1000);

	}
	return 0;
}
