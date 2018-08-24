/*************************************************************************************************************************************
*															INCLUDED FILES															*
*************************************************************************************************************************************
*/
#include <stdio.h>
#include "stm32f10x.h"
#include "gpio.h"
#include "delay.h"


/*----------------------------LED and BUZZER status------------------------------*/
void init_GPIO(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;

 	
	GPIO_InitStructure.GPIO_Pin = ADD_S0_PIN | ADD_S0_PIN | ADD_S2_PIN | ADD_G1_0_PIN | ADD_G2A_0_PIN | PMW0_PIN;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(LED_6_12_PORT, &GPIO_InitStructure);

	//enable 
	GPIO_SetBits(LED_6_12_PORT, ADD_G1_0_PIN);
	GPIO_ResetBits(LED_6_12_PORT, ADD_G2A_0_PIN);
	GPIO_ResetBits(LED_6_12_PORT, PMW0_PIN);
	//led 0
	while(1){
		//	GPIO_SetBits(LED_6_12_PORT, ADD_S0_PIN);
//		GPIO_ResetBits(LED_6_12_PORT, ADD_S0_PIN);
//		GPIO_ResetBits(LED_6_12_PORT, ADD_S1_PIN);
//		//	GPIO_SetBits(LED_6_12_PORT, ADD_S1_PIN);
//		GPIO_ResetBits(LED_6_12_PORT, ADD_S2_PIN);
		//	GPIO_SetBits(LED_6_12_PORT, ADD_S2_PIN);
//		led_ctrl(0);
//		Delay(1000);
//		GPIO_SetBits(LED_6_12_PORT, ADD_S0_PIN);
////		GPIO_ResetBits(LED_6_12_PORT, ADD_S0_PIN);
//		GPIO_ResetBits(LED_6_12_PORT, ADD_S1_PIN);
//		//	GPIO_SetBits(LED_6_12_PORT, ADD_S1_PIN);
//		GPIO_ResetBits(LED_6_12_PORT, ADD_S2_PIN);
		//	GPIO_SetBits(LED_6_12_PORT, ADD_S2_PIN);
//		led_ctrl(1);
//		Delay(1000);
		led_ctrl(2);
		Delay(1000);
	}
}

void led_ctrl(uint8_t index_led)
{
//	printf("%x %x %x\r\n", index_led, (BitAction)(index_led >> 1), (BitAction)(index_led >> 2));

	switch (index_led)
	{
		case LED0:
			printf("LED0\r\n");
			GPIO_WriteBit(LED_6_12_PORT, ADD_S0_PIN, Bit_RESET);
			GPIO_WriteBit(LED_6_12_PORT, ADD_S1_PIN, Bit_RESET);
			GPIO_WriteBit(LED_6_12_PORT, ADD_S2_PIN, Bit_RESET);
		break;
		case LED1:
			printf("LED1\r\n");
			GPIO_SetBits(LED_6_12_PORT, ADD_S0_PIN);
			GPIO_ResetBits(LED_6_12_PORT, ADD_S1_PIN);
			GPIO_ResetBits(LED_6_12_PORT, ADD_S2_PIN);
		break;
		case LED2:
			printf("LED2\r\n");
			GPIO_ResetBits(LED_6_12_PORT, ADD_S0_PIN);
			GPIO_SetBits(LED_6_12_PORT, ADD_S1_PIN);
			GPIO_ResetBits(LED_6_12_PORT, ADD_S2_PIN);
		break;
		case LED3:
			printf("LED3\r\n");
			GPIO_WriteBit(LED_6_12_PORT, ADD_S0_PIN, Bit_SET);
			GPIO_WriteBit(LED_6_12_PORT, ADD_S1_PIN, Bit_SET);
			GPIO_WriteBit(LED_6_12_PORT, ADD_S2_PIN, Bit_RESET);
		break;
		case LED4:
			printf("LED4\r\n");
			GPIO_WriteBit(LED_6_12_PORT, ADD_S0_PIN, Bit_RESET);
			GPIO_WriteBit(LED_6_12_PORT, ADD_S1_PIN, Bit_RESET);
			GPIO_WriteBit(LED_6_12_PORT, ADD_S2_PIN, Bit_SET);
		break;
		case LED5:
			printf("LED5\r\n");
			GPIO_WriteBit(LED_6_12_PORT, ADD_S0_PIN, Bit_SET);
			GPIO_WriteBit(LED_6_12_PORT, ADD_S1_PIN, Bit_RESET);
			GPIO_WriteBit(LED_6_12_PORT, ADD_S2_PIN, Bit_SET);
		break;
		case LED6:
			printf("LED6\r\n");
			GPIO_WriteBit(LED_6_12_PORT, ADD_S0_PIN, Bit_RESET);
			GPIO_WriteBit(LED_6_12_PORT, ADD_S1_PIN, Bit_SET);
			GPIO_WriteBit(LED_6_12_PORT, ADD_S2_PIN, Bit_SET);
		break;
		case LED7:
			printf("LED7\r\n");
			GPIO_WriteBit(LED_6_12_PORT, ADD_S0_PIN, Bit_SET);
			GPIO_WriteBit(LED_6_12_PORT, ADD_S1_PIN, Bit_SET);
			GPIO_WriteBit(LED_6_12_PORT, ADD_S2_PIN, Bit_SET);
		break;
	}
}






