/*
 * EXT_INT_Reg.h
 *
 *  Created on: Jul 11, 2022
 *      Author: lione
 */

#ifndef EXT_INT_REG_H_
#define EXT_INT_REG_H_

/*MCUCR to choose mode in Interrupt in external Interrupts for int0 and int1*/
#define MCUCR_REG  (*(volatile u8*)(0x55))

/*MCUCSR to choose mode in Interrupt in external Interrupts for int2*/
#define MCUCSR_REG  (*(volatile u8*)(0x54))
/*GICR to choosing for int0 or int1 or int2 to be enable or disable */
#define GICR_REG  (*(volatile u8*)(0x5B))

#endif /* EXT_INT_REG_H_ */
