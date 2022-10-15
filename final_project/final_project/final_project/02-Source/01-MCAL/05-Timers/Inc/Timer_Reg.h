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
#define OCR0_REG  (*(volatile u8*)(0x5C))
 


/* for timer1  */

#define TCCR1A_REG  (*(volatile u8*)(0x4F))
#define TCCR1B_REG  (*(volatile u8*)(0x4E))
#define OCR1BH_REG  (*(volatile u8*)(0x49))
#define OCR1BL_REG  (*(volatile u8*)(0x48))
#define TCNT1L_REG  (*(volatile u8*)(0x4C))
#define TCNT1H_REG  (*(volatile u8*)(0x4D))
#define OCR1AH_REG  (*(volatile u8*)(0x4B))
#define OCR1AL_REG  (*(volatile u8*)(0x4A))
#define OCR1A_REG  (*(volatile u16*)(0x4A))
#define ICR1H_REG  (*(volatile u8*)(0x47))
#define ICR1L_REG  (*(volatile u8*)(0x46))
#define ICR1_REG  (*(volatile u16*)(0x46))
#endif /* TIMER_REG_H_ */
