#include "bsp_timer.h"
  void Timer2_Config_Init(void)
{
	TIM_TimeBaseInitTypeDef TIM_TimeBaseStructure;
	NVIC_InitTypeDef NVIC_InitStructure;
	
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2, ENABLE);		//使能Timer2时钟
	
	TIM_TimeBaseStructure.TIM_Period = 99;					//设置在下一个更新事件装入活动的自动重装载寄存器周期的值(计数到10000为1s)
	TIM_TimeBaseStructure.TIM_Prescaler = 719;					//设置用来作为TIMx时钟频率除数的预分频值(10KHz的计数频率)
	TIM_TimeBaseStructure.TIM_ClockDivision = TIM_CKD_DIV1;		//设置时钟分割:TDTS = TIM_CKD_DIV1
	TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up;	//TIM向上计数模式
	TIM_TimeBaseInit(TIM2, &TIM_TimeBaseStructure);				//根据TIM_TimeBaseInitStruct中指定的参数初始化TIMx的时间基数单位
   
	/*中断优先级NVIC设置*/
	NVIC_InitStructure.NVIC_IRQChannel = TIM2_IRQn;				//TIM2中断
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;	//先占优先级1级
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;			//从优先级1级
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;				//使能IRQ通道
	NVIC_Init(&NVIC_InitStructure); 							//初始化NVIC寄存器
	 
	TIM_ITConfig(TIM2, TIM_IT_Update, ENABLE ); 				//使能TIM2指定的中断
	
	TIM_Cmd(TIM2, ENABLE);  									//使能TIMx外设
}

void TIM2_IRQHandler(void)   //TIM2中断
{
	

	if (TIM_GetITStatus(TIM2, TIM_IT_Update) != RESET)  //检查TIM3更新中断发生与否
	{
		TIM_ClearITPendingBit(TIM2, TIM_IT_Update );  //清除TIMx更新中断标志
        TimeBaseSchedule();
		
	}	
}

