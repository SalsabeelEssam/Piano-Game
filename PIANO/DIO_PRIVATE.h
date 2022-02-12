/****************************************************************************
 *  File Name: DIO_PRIVATE.h
 *  Module: DIO Register Memory map
 *  Description: Memory Map to all ports in AVR 32
 *  Version: 1.0.0
 *  Created on: May 24, 2021
 *  Author: Salsabeel_Essam
 ****************************************************************************/

#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_

#define PORTA_REG    (*(volatile u8*)(0x3B))
#define PORTB_REG    (*(volatile u8*)(0x38))
#define PORTC_REG    (*(volatile u8*)(0x35))
#define PORTD_REG    (*(volatile u8*)(0x32))

#define DDRA_REG     (*(volatile u8*)(0x3A))
#define DDRB_REG     (*(volatile u8*)(0x37))
#define DDRC_REG     (*(volatile u8*)(0x34))
#define DDRD_REG     (*(volatile u8*)(0x31))

#define PINA_REG     (*(volatile u8*)(0x39))
#define PINB_REG     (*(volatile u8*)(0x36))
#define PINC_REG     (*(volatile u8*)(0x33))
#define PIND_REG     (*(volatile u8*)(0x30))
 
#endif
