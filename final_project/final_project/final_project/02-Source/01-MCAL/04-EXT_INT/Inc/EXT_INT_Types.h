/*
 * EXT_INT_Types.h
 *
 *  Created on: Jul 1, 2022
 *      Author: lione
 */

#ifndef EXT_INT_TYPES_H_
#define EXT_INT_TYPES_H_
#include "Dio_Interface.h"
#include "Dio_Reg.h"
typedef enum
{
	INT0_EXT,
	INT1_EXT,
	INT2_EXT
}ext_Int_t;
typedef enum
{
	LOW_LEVEL,
	BOTH_EDGES,
	FALLING_EDGE,
	RISING_EDGE

}ext_mode_t;

#endif /* EXT_INT_TYPES_H_ */
