/*
 * Timer0.c
 *
 *  Created on: Sep 12, 2022
 *      Author: lione
 */

#include "Timer0_Interface.h"
#include "Led_Interface.h"
#include<avr/io.h>
u16 no_of_ovf;
u16 tot_overflow=0;
u8 rem;
u8 check_no=0;

static void (*Timer0_INT0)(void)=NULL;

void Timer0_Delay(f32 delay_time_ms,void(*ptr)(void))
{

	Timer0_INT0=ptr;
	f32 loc_delay_time=delay_time_ms/1000;

	f32 ovf=0.016384;
if(loc_delay_time>ovf)

{
	check_no=1;

	no_of_ovf =loc_delay_time/ovf;


			rem=	fmod((loc_delay_time/ovf)*100,100);


			GLB_ON();
			SIT_BIT(TIMSK_REG,0); //to enable inturrept


			TCCR0_REG=5;
			//TCNT0=256-rem;
}
else if (loc_delay_time<ovf)

{
	   check_no=2;

		no_of_ovf =loc_delay_time/ovf;


		rem=	fmod((loc_delay_time/ovf)*100,100);


		GLB_ON();
		SIT_BIT(TIMSK_REG,0); //to enable inturrept


		TCCR0_REG=5;
		TCNT0=rem;
}
else {

	//do nothing
}

}

void Delay(u16 delay_number){


		f32 loc_delay_time=delay_number/1000;

		f32 ovf=0.016384;

		no_of_ovf =loc_delay_time/ovf;
		rem=	fmod((loc_delay_time/ovf)*100,100);

	TCCR0_REG = 4; /* Timer0, normal mode, /1024 prescalar */
		TCNT0_REG = rem;
		while(tot_overflow<no_of_ovf)
		{/* Load TCNT0, count for 10ms */
		while((TIFR_REG&0x01)==0);  /* Wait for TOV0 to roll over */
		TCNT0 = rem;
tot_overflow++;
		TIFR_REG = 0x1;
}
		TCCR0_REG = 0;
		tot_overflow=0;
}


/*
void Timer0_INT_Callout(void(*ptr)(void))
{
	Timer0_INT0=ptr;
}
*/



ISR(TIMER0_OVF_vect)
{
if(Timer0_INT0!=NULL)
{

if(check_no==1)
{

	if(tot_overflow==no_of_ovf){


		Timer0_INT0();
			  tot_overflow=0;


			//  TCNT0=256-rem;

			  Timer0_INT0=NULL;
	}
	tot_overflow++;
}

else if(check_no==2)

{
	if(tot_overflow==(u8)no_of_ovf){


			Timer0_INT0();
				  tot_overflow=0;


				  TCNT0=256-rem;

				  Timer0_INT0=NULL;
		}
}
}
else
{
//do nothing
}
}


