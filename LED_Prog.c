/*
 * LED_Prog.c
 *
 *  Created on: Feb 9, 2019
 *      Author: islash8
 */


#include "STD_Types.h"

#include "DIO_Interface.h"

#include "LED_Interface.h"
#include "LED_Private.h"
#include "LED_Config.h"


u8 LED_u8Control (u8 copy_u8LedIndex, u8 copy_u8LedSignal)
{
	u8 local_StatusError = STD_ERROR_OK;

	if( copy_u8LedIndex < LED_NUMBER_OF_LEDS )
	{
		switch(copy_u8LedSignal)
		{
		case LED_ON:
			if(LED_Au8LedType[copy_u8LedIndex] == LED_FORWARD_CONNECTION)
			{
				DIO_u8SetPinDirection(LED_Au8LedConnection[copy_u8LedIndex], DIO_PIN_OUTPUT);
				DIO_u8SetPinValue(LED_Au8LedConnection[copy_u8LedIndex], DIO_PIN_HIGH);
			}
			else if(LED_Au8LedType[copy_u8LedIndex] == LED_REVERSE_CONNECTION)
			{
				DIO_u8SetPinDirection(LED_Au8LedConnection[copy_u8LedIndex], DIO_PIN_OUTPUT);
				DIO_u8SetPinValue(LED_Au8LedConnection[copy_u8LedIndex], DIO_PIN_LOW);
			}
			break;

		case LED_OFF:
			if(LED_Au8LedType[copy_u8LedIndex] == LED_FORWARD_CONNECTION)
			{
				DIO_u8SetPinDirection(LED_Au8LedConnection[copy_u8LedIndex], DIO_PIN_OUTPUT);
				DIO_u8SetPinValue(LED_Au8LedConnection[copy_u8LedIndex], DIO_PIN_LOW);
			}
			else if(LED_Au8LedType[copy_u8LedIndex] == LED_REVERSE_CONNECTION)
			{
				DIO_u8SetPinDirection(LED_Au8LedConnection[copy_u8LedIndex], DIO_PIN_OUTPUT);
				DIO_u8SetPinValue(LED_Au8LedConnection[copy_u8LedIndex], DIO_PIN_HIGH);
			}
			break;
		}
	}
	else
	{
		local_StatusError = STD_ERROR_NOK;
	}

	return local_StatusError;
}
