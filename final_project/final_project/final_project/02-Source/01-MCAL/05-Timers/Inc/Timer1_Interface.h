/*
 * Timer1_Interface.h
 *
 * Created: 9/27/2022 6:33:06 PM
 *  Author: Unlimited
 */ 


#ifndef TIMER1_INTERFACE_H_
#define TIMER1_INTERFACE_H_
#include "Bit_Math.h"
#include "GLBINT_Interface.h"
#include "Timer_Reg.h"
#include "Dio_Interface.h"
void Timer1_Int(void);
void Timer1_SetTime(u32 time_delay);
void Timer1_Start(void);
void Timer1_Stop(void);


void Timer1_FPWM_Stop();
void Timer1_FPWM_Start();
void Timer1_FPWM_SetTime(u8 duty_cycle);
void Timer1_FPWM_Int();

#endif /* TIMER1_INTERFACE_H_ */