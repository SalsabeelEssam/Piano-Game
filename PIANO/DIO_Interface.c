/******************************************************
 *      File Name: DIO_Interface.h
 *      Version : 1.0.0
 *      Description: Input/Output Read/Write fun to AVR
 *      Created on: MAY 24, 2021
 *      Author: Salsabeel_Essam
 ******************************************************/
#include "STD_TYPE.h"
#include "BIT_MATH.h"
#include "DIO_PRIVATE.h"

#include "DIO_INTERFACE.h"

void DIO_SetPinDirection(u8 PORT, u8 PIN, u8 DIRECTION) {
	switch (DIRECTION) {
	case INPUT:
		switch (PORT) {
		case PORTA:
			CLR_BIT(DDRA_REG, PIN);
			break;
		case PORTB:
			CLR_BIT(DDRB_REG, PIN);
			break;
		case PORTC:
			CLR_BIT(DDRC_REG, PIN);
			break;
		case PORTD:
			CLR_BIT(DDRD_REG, PIN);
			break;
		default:
			// code error
			break;
		}
		break;
	case OUTPUT:
		switch (PORT) {
		case PORTA:
			SET_BIT(DDRA_REG, PIN);
			break;
		case PORTB:
			SET_BIT(DDRB_REG, PIN);
			break;
		case PORTC:
			SET_BIT(DDRC_REG, PIN);
			break;
		case PORTD:
			SET_BIT(DDRD_REG, PIN);
			break;
		default:
			// code error
			break;
		}
		break;
	default:
		//code erroe
		break;
	}
}
void DIO_SetPinValue(u8 PORT, u8 PIN, u8 VALUE) {
	switch (VALUE) {
	case LOW:
		switch (PORT) {
		case PORTA:
			CLR_BIT(PORTA_REG, PIN);
			break;
		case PORTB:
			CLR_BIT(PORTB_REG, PIN);
			break;
		case PORTC:
			CLR_BIT(PORTC_REG, PIN);
			break;
		case PORTD:
			CLR_BIT(PORTD_REG, PIN);
			break;
		default:
			// code error
			break;
		}
		break;
	case HIGH:
		switch (PORT) {
		case PORTA:
			SET_BIT(PORTA_REG, PIN);
			break;
		case PORTB:
			SET_BIT(PORTB_REG, PIN);
			break;
		case PORTC:
			SET_BIT(PORTC_REG, PIN);
			break;
		case PORTD:
			SET_BIT(PORTD_REG, PIN);
			break;
		default:
			// code error
			break;
		}
		break;
	default:
		//code erroe
		break;
	}
}
void DIO_SetPullUP(u8 PORT, u8 PIN) {
	switch (PORT) {
	case PORTA:
		CLR_BIT(DDRA_REG, PIN);
		SET_BIT(PORTA_REG,PIN);
		break;
	case PORTB:
		CLR_BIT(DDRB_REG, PIN);
		SET_BIT(PORTB_REG,PIN);
		break;
	case PORTC:
		CLR_BIT(DDRC_REG, PIN);
		SET_BIT(PORTC_REG,PIN);
		break;
	case PORTD:
		CLR_BIT(DDRD_REG, PIN);
		SET_BIT(PORTD_REG,PIN);
		break;
	default:
		// code error
		break;
	}

}

void DIO_TogPinDirection(u8 PORT, u8 PIN) {
	switch (PORT) {
	case PORTA:
		TOGGLE_BIT(DDRA_REG, PIN);
		break;
	case PORTB:
		TOGGLE_BIT(DDRB_REG, PIN);
		break;
	case PORTC:
		TOGGLE_BIT(DDRC_REG, PIN);
		break;
	case PORTD:
		TOGGLE_BIT(DDRD_REG, PIN);
		break;
	default:
		// code error
		break;
	}
}
void DIO_TogPinValue(u8 PORT, u8 PIN) {
	switch (PORT) {
	case PORTA:
		TOGGLE_BIT(PORTA_REG, PIN);
		break;
	case PORTB:
		TOGGLE_BIT(PORTB_REG, PIN);
		break;
	case PORTC:
		TOGGLE_BIT(PORTC_REG, PIN);
		break;
	case PORTD:
		TOGGLE_BIT(PORTD_REG, PIN);
		break;
	default:
		// code error
		break;
	}
}

void DIO_SetPortDirection(u8 PORT, u8 DIRECTION) {
	switch (PORT) {
	case PORTA:
		ASSIGN_REG(DDRA_REG, DIRECTION);
		break;
	case PORTB:
		ASSIGN_REG(DDRB_REG, DIRECTION);
		break;
	case PORTC:
		ASSIGN_REG(DDRC_REG, DIRECTION);
		break;
	case PORTD:
		ASSIGN_REG(DDRD_REG, DIRECTION);
		break;
	default:
		// code error
		break;
	}
}
void DIO_SetPortValue(u8 PORT, u8 VALUE) {
	switch (PORT) {
	case PORTA:
		ASSIGN_REG(PORTA_REG, VALUE);
		break;
	case PORTB:
		ASSIGN_REG(PORTB_REG, VALUE);
		break;
	case PORTC:
		ASSIGN_REG(PORTC_REG, VALUE);
		break;
	case PORTD:
		ASSIGN_REG(PORTD_REG, VALUE);
		break;
	default:
		// code error
		break;
	}
}

u8 DIO_GetPortValue(u8 PORT) {
	u8 PortValue;
	switch (PORT) {
	case PORTA:
		PortValue = GET_REG(PINA_REG);
		break;
	case PORTB:
		PortValue = GET_REG(PINB_REG);
		break;
	case PORTC:
		PortValue = GET_REG(PINC_REG);
		break;
	case PORTD:
		PortValue = GET_REG(PIND_REG);
		break;
	default:
		// code error
		break;
	}
	return PortValue;
}
u8 DIO_GetPinValue(u8 PORT, u8 PIN) {
	u8 PortValue;
	switch (PORT) {
	case PORTA:
		PortValue = GET_BIT(PINA_REG, PIN);
		break;
	case PORTB:
		PortValue = GET_BIT(PINB_REG, PIN);
		break;
	case PORTC:
		PortValue = GET_BIT(PINC_REG, PIN);
		break;
	case PORTD:
		PortValue = GET_BIT(PIND_REG, PIN);
		break;
	default:
		// code error
		break;
	}
	return PortValue;
}

