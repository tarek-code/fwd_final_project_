/*
 * GLBINT.c
 *
 *  Created on: Jul 1, 2022
 *      Author: lione
 */

#include "GLBINT_Interface.h"

void GLB_ON(void)
{
SIT_BIT(SREG_REG,DIO_PIN7);

}

void GLB_OFF(void)
{

CLEAR_BIT(SREG_REG,DIO_PIN7);
}
