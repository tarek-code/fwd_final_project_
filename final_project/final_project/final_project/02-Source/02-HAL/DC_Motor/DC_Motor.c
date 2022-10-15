/*
 * DC_Motor.c
 *
 * Created: 9/28/2022 5:40:57 PM
 *  Author: Unlimited
 */ 
#include "DC_Motor_Interface.h"


void DC_Motor_Int(void)
{
	// make pin 3,4 in portC as output
	 Dio_Configure_Channel(PORTC,3,DIO_OUTPUT);
	 Dio_Configure_Channel(PORTC,4,DIO_OUTPUT);
	 Timer0_FPWM_Int();
}

void DC_Motor_Start(void)
{
	Timer0_FPWM_Start();
}

void DC_Motor_Set_Direction(direction direction_motor)
{
	switch(direction_motor){
		case CLOCKWISE:
		 Dio_Write_Channel(DIO_PORTC,3,DIO_HIGH);
		 Dio_Write_Channel(DIO_PORTC,4,DIO_LOW);
		break;
		case ANTICLOCKWISE:
		Dio_Write_Channel(DIO_PORTC,4,DIO_HIGH);
		Dio_Write_Channel(DIO_PORTC,3,DIO_LOW);
		break;
		default:
		// do nothing
		break;
	}
}

void DC_Motor_Stop(void)
{
	Timer0_FPWM_Stop();
}

void DC_Motor_Speed(u8 Speed)
{
	Timer0_Set_Duty(Speed);
}