/*
 * TIMER_Interface.h
 *
 *  Created on: Jun 8, 2021
 *      Author: Salsabeel Essam
 */

#ifndef TIMER_INTERFACE_H_
#define TIMER_INTERFACE_H_

void TIMER0_VoidINT(void);
//void TIMER0_VoidINT(u8 x);
void SET_Duty_Cycle_TIMER0(u8 duty);

void SET_f1_TIMER1(void) ;
void SET_f1_TIMER1(void) ;
void SET_f1_TIMER1(void) ;
void SET_f1_TIMER1(void) ;
/***********************************************************************************/
/*SET CALL BACK FUNCTION TO TIMER0 */
void TIMER0_NORMAL_MODE_SET_Call_Back(void (*TIMER0_NORMAL_MODE_Ptr_to_fun)(void));
void TIMER0_CTC_MODE_SET_Call_Back(void (*TIMER0_CTC_MODE_Ptr_to_fun)(void));

/***********************************************************************************/


void TIMER2_VoidINT(void);
//void TIMER2_VoidINT(u8 duty);
void SET_Duty_Cycle_TIMER2(u8 duty);
/***********************************************************************************/
/*SET CALL BACK FUNCTION TO TIMER2 */
void TIMER2_NORMAL_MODE_SET_Call_Back(void (*TIMER2_NORMAL_MODE_Ptr_to_fun)(void));
void TIMER2_CTC_MODE_SET_Call_Back(void (*TIMER2_CTC_MODE_Ptr_to_fun)(void));

/***********************************************************************************/

void SET_Duty_Cycle_TIMER1(u16 duty);
void TIMER1_VoidINT(void);



#endif /* TIMER_INTERFACE_H_ */
