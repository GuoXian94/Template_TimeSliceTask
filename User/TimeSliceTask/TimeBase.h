#ifndef _TIMEBASE_H_
#define _TIMEBASE_H_
#include "board.h"
#include "stm32f10x.h" 

#define TIMESLICE_10MS              0
#define TIMESLICE_50MS              1
#define TIMESLICE_100MS             2
#define TIMESLICE_200MS             3
#define SMALLTIMESLICE_COUNT_MAX    4

#define TIMESLICE_500MS         0
#define TIMESLICE_1S            1
#define TIMESLICE_5S            2
#define TIMESLICE_1MIN          3    
#define BIGTIMESLICE_COUNT_MAX  4

typedef struct
{
    uint8_t rTickCount[SMALLTIMESLICE_COUNT_MAX];
    uint8_t bTaskFlag[SMALLTIMESLICE_COUNT_MAX];
}TSmallTimeSlice;


typedef struct
{
    uint32_t wTickCount[BIGTIMESLICE_COUNT_MAX];
    uint8_t bTaskFlag[BIGTIMESLICE_COUNT_MAX];
}TBigTimeSlice;


extern volatile TSmallTimeSlice  oSmallTimeSlice;
extern volatile TBigTimeSlice  oBigTimeSlice;

void TimeBaseInit(void);
void TimeBaseSchedule(void);

#endif



