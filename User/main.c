/**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   ≤‚ ‘led
  ******************************************************************************

  */

#include "board.h"

int main(void)
{
  board_init(); //function initialization
  TimeBaseInit();
  while (1)
  {
    
   TimeSliceTaskSchedule();
  }
}

/********************************ND OF FILE********************************/



