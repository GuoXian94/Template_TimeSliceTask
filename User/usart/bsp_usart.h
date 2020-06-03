#ifndef __BSP_USART_H
#define __BSP_USART_H
#include "stm32f10x.h"


/** 
  * ���ں궨�壬��ͬ�Ĵ��ڹ��ص����ߺ�IO��һ������ֲʱ��Ҫ�޸��⼸����
	* 1-�޸�����ʱ�ӵĺ꣬uart1���ص�apb2���ߣ�����uart���ص�apb1����
	* 2-�޸�GPIO�ĺ�
  */
	
// ����1-USART1

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
