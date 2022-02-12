/******************************************************
 *      File Name: BIT_MATH.h
 *      Module: Common - Macros
 *      Version : 1.0.0
 *      Description: BIT MATH for AVR
 *      Created on: MAY 23, 2021
 *      Author: Salsabeel_Essam
 ******************************************************/

#ifndef _BIT_MATH_H_
#define _BIT_MATH_H_

#define SET_BIT(REG,BIT)     (REG|=(1<<BIT))
#define CLR_BIT(REG,BIT)     (REG&=(~(1<<BIT)))
#define TOGGLE_BIT(REG,BIT)  (REG^=(1<<BIT))

#define ASSIGN_REG(Reg,Value)  (Reg = Value)

#define GET_BIT(REG,BIT)     (((REG)>>(BIT)) & (0x01))
#define GET_REG(REG)          (REG)


#endif
