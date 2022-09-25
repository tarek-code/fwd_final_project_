#include "EXT_INT_Interface.h"
#include "Led_Interface.h"
#include "Timer0_Interface.h"
#include "Button_Interface.h"
#include "GLBINT_Interface.h"
u8 status_of_led=0;

extern tot_overflow;

void OpenLed()
{


	if(status_of_led==1 ||status_of_led== 2)
	{
		status_of_led=0;

		SIT_BIT(DIO_PORTA_REG,2);
		Led_OFF(LED1);
		Led_OFF(LED0);
		Led_OFF(LED2);

		Led_ON(LED1);
		SIT_BIT(DIO_PORTA_REG,1);
		Delay(1000);
		Led_OFF(LED1);
		CLEAR_BIT(DIO_PORTA_REG,1);
		Delay(1000);
		Led_ON(LED1);
		SIT_BIT(DIO_PORTA_REG,1);
		Delay(1000);
		Led_OFF(LED1);
		CLEAR_BIT(DIO_PORTA_REG,1);
		Delay(1000);
		Led_ON(LED1);
		SIT_BIT(DIO_PORTA_REG,1);
		Delay(1000);
		Led_OFF(LED1);
		CLEAR_BIT(DIO_PORTA_REG,1);



		SIT_BIT(DIO_PORTA_REG,0);
		Led_ON(LED2);
		CLEAR_BIT(DIO_PORTA_REG,2);
		Delay(5000);
		CLEAR_BIT(DIO_PORTA_REG,0);
		SIT_BIT(DIO_PORTA_REG,2);


		TCCR0_REG = 4;
	}


	else if(status_of_led==3)
	{
		status_of_led=0;


		Led_OFF(LED2);
		CLEAR_BIT(DIO_PORTA_REG,2);

		



		SIT_BIT(DIO_PORTA_REG,0);
		Led_ON(LED2);
		Delay(5000);
		CLEAR_BIT(DIO_PORTA_REG,0);
		SIT_BIT(DIO_PORTA_REG,2);

		TCCR0_REG = 4;
		//tot_overflow=0;

	}

}

void main()

{
	
SIT_BIT(DIO_PORTA_REG,2);

	SIT_BIT(DIO_DDRA_REG,0);
	SIT_BIT(DIO_DDRA_REG,1);
	SIT_BIT(DIO_DDRA_REG,2);


	EXT_INT_Enable(INT0_EXT, FALLING_EDGE);

	EXT_INT_Callout(OpenLed, INT0_EXT);
	GLB_ON();
	Led_Init();
	while(1)
	{
SIT_BIT(DIO_PORTA_REG,2);



		status_of_led=1;
		Led_ON(LED0);
		Delay(5000);
		Led_OFF(LED0);


		status_of_led=2;
		Led_ON(LED1);
		Delay(1000);
		Led_OFF(LED1);
		Delay(1000);
		Led_ON(LED1);
		Delay(1000);
		Led_OFF(LED1);
		Delay(1000);
		Led_ON(LED1);
		Delay(1000);
		Led_OFF(LED1);


		status_of_led=3;
		Led_ON(LED2);
		Delay(5000);
		Led_OFF(LED2);




		status_of_led=2;
		Led_ON(LED1);
		Delay(1000);
		Led_OFF(LED1);
		Delay(1000);
		Led_ON(LED1);
		Delay(1000);
		Led_OFF(LED1);
		Delay(1000);
		Led_ON(LED1);
		Delay(1000);
		Led_OFF(LED1);

	}

}
