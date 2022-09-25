/*
 * Dio_Interface.h
 *
 *  Created on: Jun 23, 2022
 *      Author: lione
 */

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

#include "Dio_Types.h"
#include "Bit_Math.h"
#include "Dio_Reg.h"

void Dio_Configure_Channel(dio_port_t port,dio_pin_t pin,dio_direction_t direction);
void Dio_Write_Channel_Group(dio_port_t port , u8 mask,u8 data);
void Dio_Write_Channel(dio_port_t port,dio_pin_t pin,dio_level_t level);

dio_level_t Dio_Read_Channel(dio_port_t port,dio_pin_t pin);
void Dio_Flip_Channel(dio_port_t port,dio_pin_t pin);
void Dio_Enable_Pullup(dio_port_t port,dio_pin_t pin);

#endif /* DIO_INTERFACE_H_ */
