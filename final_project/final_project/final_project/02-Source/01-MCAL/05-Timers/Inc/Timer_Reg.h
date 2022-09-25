/*
 * Timer_Reg.h
 *
 *  Created on: Sep 13, 2022
 *      Author: lione
 */

#ifndef TIMER_REG_H_
#define TIMER_REG_H_


/* for timer0  */
/*TCCR0 to choose mode and prescaler */
#define TCCR0_REG  (*(volatile u8*)(0x53))
/*TCNT0 save the preload */
#define TCNT0_REG  (*(volatile u8*)(0x52))
/*TIMSK Timer/Counter0 Overflow Interrupt Enable */
#define TIMSK_REG  (*(volatile u8*)(0x59))
/*TIFR Timer/Counter0 Overflow Flag */
#define TIFR_REG  (*(volatile u8*)(0x58))

#endif /* TIMER_REG_H_ */
