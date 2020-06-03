#ifndef __BSP_USART_H
#define __BSP_USART_H
#include "stm32f10x.h"


/** 
  * 串口宏定义，不同的串口挂载的总线和IO不一样，移植时需要修改这几个宏
	* 1-修改总线时钟的宏，uart1挂载到apb2总线，其他uart挂载到apb1总线
	* 2-修改GPIO的宏
  */
	
// 串口1-USART1

static void NVIC_Configuration_Usart1(void);
static void NVIC_Configuration_Usart2(void);
static void NVIC_Configuration_Usart3(void);


void USART1_Config_Init(u32 USART_BAUDRATE);
void USART2_Config_Init(u32 USART_BAUDRATE);
void USART3_Config_Init(u32 USART_BAUDRATE);
void Usart_SendByte( USART_TypeDef * pUSARTx, uint8_t ch);
void Usart_SendString( USART_TypeDef * pUSARTx, char *str);
void Usart_SendHalfWord( USART_TypeDef * pUSARTx, uint16_t ch);

 
#endif
