/*
 * Timer0_Interface.h
 *
 *  Created on: Sep 11, 2022
 *      Author: lione
 */

#ifndef TIMER0_INTERFACE_H_
#define TIMER0_INTERFACE_H_
#include <math.h>
#include <avr/interrupt.h>
#include "std_Types.h"
#include "Bit_Math.h"
#include <stddef.h>
#include "Timer_Reg.h"
#include "GLBINT_Interface.h"
void Timer0_Delay(f32 delay_time_ms,void(*ptr)(void));
void Timer0_INT_Callout(void(*ptr)(void));
void Delay(u16 delay_number);


void Timer0_FPWM_Start();
void Timer0_FPWM_Int();
void Timer0_FPWM_Stop();
void Timer0_Set_Duty(u8 duty_cycle);

#endif /* TIMER0_INTERFACE_H_ */
