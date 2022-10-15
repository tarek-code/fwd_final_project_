/*
 * WDT.c
 *
 * Created: 9/29/2022 2:42:49 PM
 *  Author: Unlimited
 */ 
#include "WDT_Interface.h"

void WDT_Int()
{
	// Watchdog Enable
	SIT_BIT(WDTCR_REG,3);

}

void WDT_Refresh()
{
	
}

void WDT_Start()
{
		//Watchdog Timer Prescaler 2, 1, and 0 to be 2.1 sec
		SIT_BIT(WDTCR_REG,0);
		SIT_BIT(WDTCR_REG,1);
		SIT_BIT(WDTCR_REG,2);
}