/*
 *  Module: KEYPAD_Programe.c

 *  Description: source file for keypad driver
 *
 *  Created on: May 28, 2021
 *
 *  Author: Sara Hamdy Abd_Elaziz Mohamed
 *
 */

#include "STD_TYPE.h"
#include"BIT_MATH.h"
#include<avr/delay.h>
#include"DIO_Interface.h"
#include"DIO_private.h"
#include "KEYPAD_Interface.h"
#include"KEYPAD_Config.h"

/******function that take  button number  then return corresponding functional number in the proteus */
/*************************************function declaration********************************************/
#if (3==NO_COLUMNS )

  static u8  KEYPAD_4x3_AjustSwitchNumber(u8 button_number);

#elif (4==NO_COLUMNS )

 static u8  KEYPAD_4x4_AjustSwitchNumber(u8 button_number);

#endif


/**********************************function definition******************************************/

 // DIO_SetPinDirection(ORTA, col,HIGH);
  //DIO_SetPinValue(PORTA, col,LOW);

 u8  KEYPAD_U8GetPressedKey(void)

 {
	 u8 row=0 , col=0 ;
	 u8 pressedkey=150;
	 u8 pinvalue;
while(1)
{
	 for(col=0 ; col<NO_COLUMNS ; col++)  // A0 to A3
	 {
  /* each time only one of the column pins will be output and the rest will be input pins include the row pins
   * col0=0 col1,col2 =1 then
   *  col1=0 col0,col2=1 then
   *  col2=0 col0,col1=1 */
		 DIO_SetPortDirection(PORTA,0x0f); // PORTA output from AO TO A3
		 DIO_SetPortValue(PORTA,0xff);  //ACtivate pull up resistor+ initnalization columns
		 DIO_SetPinValue(PORTA, col,LOW); // c0=0 c1=1 c2=1 c3=1

		 for(row=0 ; row< NO_ROWS ; row++) //  A4 to A7
		 {
			 pinvalue=DIO_GetPinValue(PORTA,(row+4)); // pin4  pin5  pin6  pin7

			  if( 0== pinvalue ) // if row =zero
			 		{
			 					#if (3==NO_COLUMNS )
				                          pressedkey= KEYPAD_4x3_AjustSwitchNumber((row*NO_COLUMNS )+col+1);

			 					#elif (4==NO_COLUMNS )
				                          pressedkey= KEYPAD_4x4_AjustSwitchNumber((row*NO_COLUMNS )+col+1);
			 					#endif
			 	   }

		 }

		 DIO_SetPinValue(PORTA, col,HIGH); // make col0=1 col1=1 col2=1 and so on
	 }

	 return pressedkey ;
     }
  }

 /**********************************function definition******************************************/
 /* mapping the switch number in the keypad to its corresponding functional number in the proteus for 4x3 keypad*/
#if   (  3 == NO_COLUMNS )

 static u8  KEYPAD_4x3_AjustSwitchNumber(u8 button_number)
 {
    switch(button_number)
    {

       case 10: return '*' ; break; // return ascii code of *

       case 11:  return 0 ; break; // return  zero

       case 12:  return '#' ; break; // return ascii code of #

       default : return button_number ;
    }
 }
#endif

 /* mapping the switch number in the keypad to its corresponding functional number in the proteus for 4x4 keypad*/
#if   (  4 == NO_COLUMNS )

    static u8  KEYPAD_4x4_AjustSwitchNumber(u8 button_number)
    {
			switch(button_number)
			   {

					   case 1: return 7 ; break; // return  7

					   case 2:  return 8 ; break; // return  8

					   case 3:  return 9 ; break; // return  9

					   case 4: return '%' ; break; // return ascii code of %

					   case 5:  return 4 ; break; // return 4

					   case 6:  return 5 ; break; // return 5

					   case 7: return 6 ; break; // return 6

					   case 8:  return '*' ; break; // return ascii code of *

					   case 9:  return 1 ; break; // return 1

					   case 10: return 2 ; break; // return 2

					   case 11:  return 3 ; break; // return 3

					   case 12:  return '-' ; break; // return ascii code of -

					   case 13:  return 13 ; break; // return ascii code of enter

					   case 14:  return 0 ; break; // return 0

					   case 15: return '=' ; break; // return ascii code of =

					   case 16:  return '+' ; break; // return ascii code of +

					   default : return button_number ;
			}

    }

#endif

