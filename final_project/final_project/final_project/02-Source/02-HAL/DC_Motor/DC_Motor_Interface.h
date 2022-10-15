/*
 * DC_Motor_Interface.h
 *
 * Created: 9/28/2022 5:41:14 PM
 *  Author: Unlimited
 */ 


#ifndef DC_MOTOR_INTERFACE_H_
#define DC_MOTOR_INTERFACE_H_
#include "std_Types.h"
#include "Bit_Math.h"
#include "Dio_Interface.h"
#include "Timer0_Interface.h"
typedef enum{
	CLOCKWISE,
	ANTICLOCKWISE
	
}direction;

void DC_Motor_Int();
void DC_Motor_Start(void);
void DC_Motor_Set_Direction(direction direction_motor);
void DC_Motor_Stop(void);
void DC_Motor_Speed(u8 Speed);
#endif /* DC_MOTOR_INTERFACE_H_ */