/************************************************************************************/
/* Author  : Islam A.                                                               */
/* Date    : 20 FEB 2019                                                            */
/* Version : V01                                                                    */
/************************************************************************************/
/* Description                                                                      */
/* ------------                                                                     */
/*  This source file is used for the implementation LED driver, provides a layer of */
/*  abstraction of the hardware of MCU (ATmega32) itself.                           */
/************************************************************************************/

/************************************************************************************/
/* -------------------------------> Header files  <---------------------------------*/
/************************************************************************************/

#include "STD_Types.h"

#include "DIO_Interface.h"

#include "LED_Interface.h"
#include "LED_Private.h"
#include "LED_Config.h"

/************************************************************************************/

/************************************************************************************/
/* Name: 1. LED_u8Control													     	*/
/* Description: Set pin direction													*/
/* Inputs:  -> Pin number (copy_u8PinNB) (ranges from 0 -> 31)						*/
/*          -> Direction (copy_u8Direction) (either 0 for input or 1 for output)	*/
/* Outputs: -> Error Status (local_u8Error), Expects either OK=1, or NOK=0	     	*/
/************************************************************************************/

u8 LED_u8Control (u8 copy_u8LedIndex, u8 copy_u8LedSignal)
{
	/* local variable to save the error status 										*/

	u8 local_StatusError = STD_ERROR_OK;

	/* input validation to check the inputs are correct								*/

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
