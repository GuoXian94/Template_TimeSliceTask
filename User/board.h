#ifndef __BOARD_H
#define __BOARD_H

#include "bsp_delay.h"
#include "bsp_usart.h"
#include "bsp_printf.h"
#include "bsp_gpio.h"
#include "bsp_timer.h"
#include "bsp_application.h"
#include "TimeSliceTask.h"
#include "TimeBase.h"
//#include "stick.h"
//#include "stimer.h"
//#include "stask.h"


#define FlagTure   1
#define FlagFalse   0
void board_init(void);

#endif
/*********************************************END OF FILE**********************/
