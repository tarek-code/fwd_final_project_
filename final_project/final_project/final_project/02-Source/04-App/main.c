#include "WDT_Interface.h"

#include "Led_Interface.h"



void main()

{
WDT_Int();
WDT_Start();
	Led_Init();
Led_ON(LED0);
_delay_ms(500);
Led_OFF(LED0);
_delay_ms(500);

while(1)
{
	
	
}

}
