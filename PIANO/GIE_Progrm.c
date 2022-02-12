/*
 * GIE_Progrm.c
 *
 *  Created on: Jun 7, 2021
 *      Author: Salsabeel Essam
 */


#include"STD_TYPE.h"
#include"GIE_Private.h"
#include"BIT_MATH.h"

void GIE_VoidEnable(void){
  SET_BIT(SREG,I_BIT);
}

void GIE_VoidDisable(void){
	CLR_BIT(SREG,I_BIT);
}
