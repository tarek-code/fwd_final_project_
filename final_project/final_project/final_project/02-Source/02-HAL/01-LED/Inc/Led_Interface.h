/*
 * Led_Interface.h
 *
 *  Created on: Jun 23, 2022
 *      Author: lione
 */

#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_

#include "Dio_Interface.h"
#include <util/delay.h>
#include "Led_Types.h"
#include "Led_Cfg.h"
void Led_Init();
void Led_ON(led_id_t led);
void Led_OFF(led_id_t led);
void Led_Toggle(led_id_t led);
#endif /* LED_INTERFACE_H_ */
