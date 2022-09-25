/*
 * Bit_Math.h
 *
 *  Created on: Jun 22, 2022
 *      Author: lione
 */

#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SIT_BIT(Register,Bit_no) 		(Register|=(1<<Bit_no))

#define CLEAR_BIT(Register,Bit_no) 		(Register&=~(1<<Bit_no))

#define TOGGLE_BIT(Register,Bit_no) 	(Register^=(1<<Bit_no))

#define CHECK_BIT(Register,Bit_no)  	((Register>>Bit_no)&0x01)

#endif /* BIT_MATH_H_ */

