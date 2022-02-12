/*
 * TIMER_Private.h
 *
 *  Created on: Jun 8, 2021
 *      Author: Salsabeel Essam
 */

#ifndef TIMER_PRIVATE_H_
#define TIMER_PRIVATE_H_

/****** TIMER 0 PROTOTYPE ISR ***********/
void __vector_11(void) __attribute__((signal));
void __vector_10(void) __attribute__((signal));

/****** TIMER 2 PROTOTYPE ISR ***********/
void __vector_5(void) __attribute__((signal));
void __vector_4(void) __attribute__((signal));

/****** TIMER 1 PROTOTYPE ISR ***********/
void __vector_6(void) __attribute__((signal));
void __vector_7(void) __attribute__((signal));
void __vector_8(void) __attribute__((signal));
void __vector_9(void) __attribute__((signal));

/*****************************************************************************/
/* TIMER 0 REGISTERS  AND BITS NUMBERS */

#define TCCR0  (*(volatile u8*)  0x53)
#define TCNT0  (*(volatile u8*)  0x52)
#define OCR0   (*(volatile u8*)  0x5C)
#define TIMSK  (*(volatile u8*)  0x59)
#define TIFR   (*(volatile u8*)  0x58)
#define SFIOR  (*(volatile u8*)  0x50)

// REGISTER TCCR0
#define FOC0  7
#define WGM00 6
#define COM01 5
#define COM00 4
#define WGM01 3
#define CS02  2
#define CS01  1
#define CS00  0

// REGISTER TIMSK
#define OCIE0 1
#define TOIE0 0

// REGISTER TIFR TIMER0
#define OCF0 1
#define TOV0 0

// REGISTER SFIOR TIMER0
#define PSR10 0
/**************************************************************************************************/
/* TIMER 2 REGISTERS  AND BITS NUMBERS */

#define TCCR2   (*(volatile u8*)  0x45)
#define TCNT2   (*(volatile u8*)  0x44)
#define OCR2    (*(volatile u8*)  0x43)
#define ASSR    (*(volatile u8*)  0x42)
//#define TIMSK   (*(volatile u8*)  0x59)
//#define TIFR    (*(volatile u8*)  0x58)
//#define SFIOR   (*(volatile u8*)  0x50)

// REGISTER TCCR2
#define FOC2  7
#define WGM20 6
#define COM21 5
#define COM20 4
#define WGM21 3
#define CS22  2
#define CS21  1
#define CS20  0

/*REGISTER ASSR TIMER 2*/
#define AS2     1
#define TCN2UB  0
#define OCR2UB  1
#define TCR2UB  0

/* REGISTER TIMSK TIMER2*/
#define OCIE2 7
#define TOIE2 6

/*REGISTER TIFR TIMER2*/
#define OCF2 7
#define TOV2 6

/*REGISTER SFIOR TIMER2*/
#define PSR2 1

/*******************************************************/
// NORMAL_MODE =0 , PHASE_CORRECT_MODE=  1 , CTC_MODE=2 , FAST_PWM = 1
#define NORMAL_MODE             0
#define PHASE_CORRECT_MODE      1
#define CTC_MODE                2
#define FAST_PWM                3

// NO_CLCK_SOURCE =0 , NO_PRECALING =1  CLCK_DIV_8 = 2 , CLCK_DIV_64 = 3, CLCK_DIV_256 = 4,CLCK_DIV_1024 = 5
#define NO_CLCK_SOURCE       0
#define NO_PRECALING         1
#define CLCK_DIV_8           2
#define CLCK_DIV_64          3
#define CLCK_DIV_256         4
#define CLCK_DIV_1024        5

#define CLCK_DIV_32          6
#define CLCK_DIV_128         7

//  DISABLE_INT = 0, ENABLE_INT = 1
#define DISABLE_INT 0
#define ENABLE_INT  1

//  NORMAL_PORT_OPERATION = 0  INVERTED_MODE =1   , NON_INVERTED_MODE =2
#define NORMAL_PORT_OPERATION   0
#define INVERTED_MODE           1
#define NON_INVERTED_MODE       2
#define TOGGLE_OCR1A_COMPARE_OC1B_DISCONNECTED  3

// NORMAL_PORT_OPERATION = 0 TOGGLE_OC0_ON_COMPARE_MATCH =1   , CLEAR_OC0_ON_COMPARE_MATCH =2 , SET_OC0_ON_COMPARE_MATCH = 3 ,
#define TOGGLE_OC0_ON_COMPARE_MATCH   1
#define CLEAR_OC0_ON_COMPARE_MATCH    2
#define SET_OC0_ON_COMPARE_MATCH      3

/*****************************************************************************/
/* TIMER 1 REGISTERS  AND BITS NUMBERS */

#define TCCR1A    (*(volatile u8*)  0x4F)
#define TCCR1B    (*(volatile u8*)  0x4E)
/***************************/
#define TCNT1     (*(volatile u16*)  0x4C)
#define TCNT1H    (*(volatile u8*)   0x4D)
#define TCNT1L    (*(volatile u8*)   0x4C)
/****************************/
#define OCR1A     (*(volatile u16*)  0x4A)
#define OCR1AH    (*(volatile u8*)   0x4B)
#define OCR1AL    (*(volatile u8*)   0x4A)
/********************************/
#define OCR1B     (*(volatile u16*)  0x48)
#define OCR1BH    (*(volatile u8*)   0x49)
#define OCR1BL    (*(volatile u8*)   0x48)
/************************************/
#define ICR1      (*(volatile u16*)  0x46)
#define ICR1H     (*(volatile u8*)   0x47)
#define ICR1L     (*(volatile u8*)   0x46)


// REGISTER TCCR1A
#define COM1A1   7
#define COM1A0   6
#define COM1B1   5
#define COM1B0   4
#define FOC1A    3
#define FOC1B    2
#define WGM11    1
#define WGM10    0


// REGISTER TCCR1B
#define ICNC1    7
#define ICES1    6

#define WGM13    4
#define WGM12    3
#define CS12     2
#define CS11     1
#define CS10     0

// REGISTER TIMSK
#define TICIE1   5
#define OCIE1A   4
#define OCIE1B   3
#define TOIE1    2

// REGISTER TIFR TIMER1
#define ICF1     5
#define OCF1A    4
#define OCF1B    3
#define TOV1     2

/*******************************************************************************/

#define  NORMAL_MODE_TIMER1                                     1
#define  PWM_PHASE_CORRECT_8BIT                                 2
#define  PWM_PHASE_CORRECT_9BIT                                 3
#define  PWM_PHASE_CORRECT_10BIT                                4
#define  CTC_MODE_OCR1                                          5
#define  FAST_PWM_8BIT                                          6
#define  FAST_PWM_9BIT                                          7
#define  FAST_PWM_10BIT                                         8
#define  PWM_PHASE_AND_FREQUANCY_CORRECT_ICR1                   9
#define  PWM_PHASE_AND_FREQUANCY_CORRECT_OCR1                   10
#define  PWM_PHASE_CORRECT_ICR1                                 11
#define  PWM_PHASE_CORRECT_OCR1                                 12
#define  CTC_MODE_ICR1                                          13
#define  FAST_PWM_ICR1                                          15
#define  FAST_PWM_OCR1                                          16
/**************************************************************************/


#define  TOGGLE_OC1_A_B_ON_COMPARE_MATCH    1
#define  CLEAR_OC1_A_B_ON_COMPARE_MATCH     2
#define  SET_OC1_A_B_ON_COMPARE_MATCH       3

/********************************************************************/

#define  ENABLE_CANCELER    0
#define  DISABLE_CANCELER   1

/*******************************************************************/
#define  RISING_EDGE    0
#define  FALLING_EDGE   1
#endif /* TIMER_PRIVATE_H_ */
