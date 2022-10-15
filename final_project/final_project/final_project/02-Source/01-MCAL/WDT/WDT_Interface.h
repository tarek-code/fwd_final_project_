/*
 * WDT_Interface.h
 *
 * Created: 9/29/2022 2:43:02 PM
 *  Author: Unlimited
 */ 


#ifndef WDT_INTERFACE_H_
#define WDT_INTERFACE_H_
#include "Bit_Math.h"
#include "std_Types.h"
#include "WDT_Reg.h"

void WDT_Int();
void WDT_Refresh();
void WDT_Start();

#endif /* WDT_INTERFACE_H_ */