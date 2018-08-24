#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
 extern "C" {
#endif 
/*************************************************************************************************************************************
*															INCLUDED FILES															*
*************************************************************************************************************************************
*/
#include <stdint.h>

/*
*************************************************************************************************************************************
*															PRIVATE TYPE	DEFINE														*
********************************************************************************************************************************
*/
#define ADD_S0_PIN							GPIO_Pin_9
#define ADD_S1_PIN							GPIO_Pin_8
#define ADD_S2_PIN							GPIO_Pin_7
#define ADD_G1_0_PIN						GPIO_Pin_4
#define ADD_G2A_0_PIN						GPIO_Pin_6
#define PMW0_PIN							GPIO_Pin_5
#define LED_6_12_PORT						GPIOB


/*
*************************************************************************************************************************************
*															PRIVATE MACRO															*
*************************************************************************************************************************************
*/
#define LED0	0
#define LED1	1
#define LED2	2
#define LED3	3
#define LED4	4
#define LED5	5
#define LED6	6
#define LED7	7


/*
*************************************************************************************************************************************
*															PRIVATE VARIABLES														*
*************************************************************************************************************************************
*/


/*
*************************************************************************************************************************************
*															PRIVATE FUNCTION PROTOTYPES												*
*************************************************************************************************************************************
*/

 /*
*************************************************************************************************************************************
*							  						   		GLOBAL FUNCTION PROTOTYPES												*
*************************************************************************************************************************************
*/
void init_GPIO(void);
void led_ctrl(uint8_t index_led);
/******************* (C) COPYRIGHT 2009 ARMVietNam *****END OF FILE****/
 


#endif /* __MAIN_H */
