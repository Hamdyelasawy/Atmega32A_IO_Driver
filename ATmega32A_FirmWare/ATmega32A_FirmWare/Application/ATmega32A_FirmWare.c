/*
 * ATmega32A_FirmWare.c
 *
 * Created: 8/4/2019 9:17:00 PM
 *  Author: Hamdy
 */ 


#include <ATmega32A_GPIO.h>


typedef enum
{
	released = 0,
	Pressed  = 1,
}PushValues;

DigitalValues Led_State	   = LOW;
PushValues    Last_SwState = released;

int main(void)
{
	
	/* Configure pins as Input */
	GPIO_DirectionSet(GPIOA,ALLRegister,OUTPUT);

	int8_t i =0;
    while(1)
    {		
		for (i=0;i<8;i++)
		{
			GPIO_OutputHandle(GPIOA,i,HIGH);
			_delay_ms(250);
		}
		
    }
}