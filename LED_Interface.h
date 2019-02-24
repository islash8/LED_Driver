/************************************************************************************/
/* Author  : Islam A.                                                               */
/* Date    : 20 FEB 2019                                                            */
/* Version : V01                                                                    */
/************************************************************************************/
/* Description                                                                      */
/* ------------                                                                     */
/* This file contains the LED API prototypes and interfaces for external usage      */
/************************************************************************************/

/************************************************************************************/
/* -------------------------------> Guard Section <---------------------------------*/
/************************************************************************************/

#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_

/************************************************************************************/

/* Macro definition for LED modes to be used in upper application layers			*/

#define LED_ON  (u8)1
#define LED_OFF (u8)0

/* LED control API, that expects the LED index and the mode need to operate in 		*/

u8 LED_u8Control (u8 copy_u8LedIndex,u8 copy_u8LedSignal);

/************************************************************************************/

#endif /* LED_INTERFACE_H_ */
