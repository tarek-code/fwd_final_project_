/*
 * EXT_INT.c
 *
 *  Created on: Jul 1, 2022
 *      Author: lione
 */




/*
INT2 >> PB2
INT0 >> PD2
INT1 >> PD3
*/
#include "EXT_INT_Interface.h"

static void (*fptr)(void)=NULL;
static void (*EXT_INT0)(void)=NULL;
static void (*EXT_INT1)(void)=NULL;
static void (*EXT_INT2)(void)=NULL;


void EXT_INT_Enable(ext_Int_t ext,ext_mode_t mode)
{
switch(ext)
{
case INT0_EXT:
	SIT_BIT(GICR_REG, DIO_PIN6);
	MCUCR_REG=(MCUCR_REG & 0xFC)|(mode<<0);
	break;
case INT1_EXT:
	SIT_BIT(GICR_REG, DIO_PIN7);
	MCUCR_REG|=(MCUCR_REG & 0xF3)|(mode<<2);
	break;
case INT2_EXT:
	SIT_BIT(GICR_REG, DIO_PIN5);
	if(mode==RISING_EDGE)
	{

		SIT_BIT(MCUCSR_REG,DIO_PIN6);
	}
	else if(mode==FALLING_EDGE)
	{

		CLEAR_BIT(MCUCSR_REG,DIO_PIN6);
	}
	else
	{

		//do nothing
	}
	break;
}
}

void EXT_INT_Disable(ext_Int_t ext)
{
	switch(ext)
	{
	case INT0_EXT:
		CLEAR_BIT(GICR_REG, DIO_PIN6);
		break;
	case INT1_EXT:
		CLEAR_BIT(GICR_REG, DIO_PIN7);
		break;
	case INT2_EXT:
		CLEAR_BIT(GICR_REG, DIO_PIN5);
		break;
	}
}



void EXT_INT_Callout(void(*ptr)(void),ext_Int_t ext)
{
switch (ext)
{
case INT0_EXT:
EXT_INT0=ptr;
	break;

case INT1_EXT:
EXT_INT1=ptr;
	break;

case INT2_EXT:
EXT_INT2=ptr;
	break;
}
}

ISR(INT0_vect)
{
if(EXT_INT0!=NULL)
{
EXT_INT0();
//EXT_INT0=NULL;
}
else
{
//do nothing
}
}


ISR(INT1_vect)
{
if(EXT_INT1!=NULL)
{
EXT_INT0();
EXT_INT1=NULL;
}
else
{
//do nothing
}
}


ISR(INT2_vect)
{
if(EXT_INT2!=NULL)
{
EXT_INT0();
EXT_INT2=NULL;
}
else
{
//do nothing
}
}


// How to Make ISR
/*
 * #include <avr\interrupt>
 * ISR(Name_Of_Interrupt_vect)
 * {
 * Your Code u want to do here
 * }
 *
 *
 * */
