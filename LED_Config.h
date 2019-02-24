/************************************************************************************/
/* Author  : Islam A.                                                               */
/* Date    : 20 FEB 2019                                                            */
/* Version : V01                                                                    */
/************************************************************************************/
/* Description                                                                      */
/* ------------                                                                     */
/* This file contains the initial configuration for the LED initialization function */
/************************************************************************************/

/************************************************************************************/
/* -------------------------------> Guard Section <---------------------------------*/
/************************************************************************************/

#ifndef LED_CONFIG_H_
#define LED_CONFIG_H_

/************************************************************************************/

/* Number of LEDS used in system, each one has it's own index						*/

#define LED_NUMBER_OF_LEDS (u8)8

/* An array that has size of Number of leds used, and hold the type of connection   */

u8 LED_Au8LedType[LED_NUMBER_OF_LEDS]={LED_FORWARD_CONNECTION, LED_FORWARD_CONNECTION,
									   LED_FORWARD_CONNECTION, LED_FORWARD_CONNECTION,
									   LED_FORWARD_CONNECTION, LED_FORWARD_CONNECTION,
									   LED_FORWARD_CONNECTION, LED_FORWARD_CONNECTION};

/* An array that holds the size of led numbers as index, and connection pins of MC	*/

u8 LED_Au8LedConnection[LED_NUMBER_OF_LEDS]={DIO_PIN24, DIO_PIN25,
										     DIO_PIN26, DIO_PIN27,
											 DIO_PIN28, DIO_PIN29,
											 DIO_PIN30, DIO_PIN31};

#endif /* LED_CONFIG_H_ */

/************************************************************************************/
