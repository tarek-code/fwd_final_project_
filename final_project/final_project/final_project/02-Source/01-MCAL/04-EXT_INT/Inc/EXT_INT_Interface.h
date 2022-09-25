/*
 * EXT_INT_Interface.h
 *
 *  Created on: Jul 1, 2022
 *      Author: lione
 */

#ifndef EXT_INT_INTERFACE_H_
#define EXT_INT_INTERFACE_H_

#include "EXT_INT_Types.h"
#include "EXT_INT_Reg.h"
#include "Bit_Math.h"
#include "Dio_Types.h"
#include <stddef.h>
#include <avr/interrupt.h>
void EXT_INT_Enable(ext_Int_t ext,ext_mode_t mode);
void EXT_INT_Disable(ext_Int_t ext);
void EXT_INT_Callout(void(*ptr)(void),ext_Int_t ext);
#endif /* EXT_INT_INTERFACE_H_ */
