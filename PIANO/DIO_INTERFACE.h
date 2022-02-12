/******************************************************
 *      File Name: DIO_INTERFACE.h
 *      Version : 1.0.0
 *      Description: Prototypes Input/Output Read/Write fun to AVR
 *      Created on: MAY 24, 2021
 *      Author: Salsabeel_Essam
 ******************************************************/

#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H

#define PORTA 0
#define PORTB 1
#define PORTC 2
#define PORTD 3

#define INPUT  0
#define OUTPUT 1

#define LOW  0
#define HIGH 1

typedef enum {
	PIN0, PIN1, PIN2, PIN3, PIN4, PIN5, PIN6, PIN7
} PIN_NUM;

void DIO_SetPinDirection(u8 PORT, u8 PIN, u8 DIRECTION);
void DIO_SetPinValue(u8 PORT, u8 PIN, u8 VALUE);
void DIO_SetPullUP(u8 PORT, u8 PIN);

void DIO_TogPinDirection(u8 PORT, u8 PIN);
void DIO_TogPinValue(u8 PORT, u8 PIN);

void DIO_SetPortDirection(u8 PORT, u8 DIRECTION);
void DIO_SetPortValue(u8 PORT, u8 VALUE);

u8 DIO_GetPortValue(u8 PORT);
u8 DIO_GetPinValue(u8 PORT, u8 PIN);

#endif
