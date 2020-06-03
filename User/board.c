#include "board.h"

void board_init()
{
     NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
     delay_init(); //Delay function initialization
     USART1_Config_Init(115200);
     USART2_Config_Init(115200);
     USART3_Config_Init(115200);
     Timer2_Config_Init();
     GPIO_Config_Init();
   
}
