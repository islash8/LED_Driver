/*
 * main.c
 *
 *  Created on: Jan 29, 2019
 *      Author: islas
 */

#include "STD_Types.h"

#include "Lib_Delay.h"
#include "DIO_Interface.h"
#include "LED_Interface.h"

void Lib_vDelayMs(u16 time);

void main (void)
{


	while (1)
	{
	LED_u8Control (0, LED_ON);
	Lib_vDelayMs(500);
	LED_u8Control (0, LED_OFF);
	Lib_vDelayMs(500);
	LED_u8Control (1, LED_ON);
	Lib_vDelayMs(500);
	LED_u8Control (1, LED_OFF);
	Lib_vDelayMs(500);
	LED_u8Control (2, LED_ON);
	Lib_vDelayMs(500);
	LED_u8Control (2, LED_OFF);
	Lib_vDelayMs(500);
	LED_u8Control (3, LED_ON);
	Lib_vDelayMs(500);
	LED_u8Control (3, LED_OFF);
	Lib_vDelayMs(500);
	LED_u8Control (4, LED_ON);
	Lib_vDelayMs(500);
	LED_u8Control (4, LED_OFF);
	Lib_vDelayMs(500);
	LED_u8Control (5, LED_ON);
	Lib_vDelayMs(500);
	LED_u8Control (5, LED_OFF);
	Lib_vDelayMs(500);
	LED_u8Control (6, LED_ON);
	Lib_vDelayMs(500);
	LED_u8Control (6, LED_OFF);
	Lib_vDelayMs(500);
	LED_u8Control (7, LED_ON);
	Lib_vDelayMs(500);
	LED_u8Control (7, LED_OFF);
	Lib_vDelayMs(500);

	}
}
