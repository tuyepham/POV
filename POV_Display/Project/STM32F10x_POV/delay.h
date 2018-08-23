/**************************************************************************
* delay.h
**************************************************************************/
#ifndef __DELAY_H
#define	__DELAY_H

#include "stm32f10x.h"

void SysTick_Configuration(void);
void Decrement_TimingDelay(void);
void Delay(__IO uint32_t nCount);


#endif
