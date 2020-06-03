#include "TimeBase.h"

uint8_t   C_rSmallTickCountMax[SMALLTIMESLICE_COUNT_MAX]={10,50,100,200};
uint32_t  C_wBigTickCountMax[BIGTIMESLICE_COUNT_MAX]={500,1000,5000,60000};

volatile TSmallTimeSlice  oSmallTimeSlice;
volatile TBigTimeSlice  oBigTimeSlice;


void TimeBaseInit(void)
{
    uint8_t i;
    for (i=0;i<SMALLTIMESLICE_COUNT_MAX;i++)
    {
        oSmallTimeSlice.rTickCount[i] = 0;
        oSmallTimeSlice.bTaskFlag[i] = FlagFalse;
    }
    for (i=0;i<BIGTIMESLICE_COUNT_MAX;i++)
    {
        oBigTimeSlice.wTickCount[i] = 0;
        oBigTimeSlice.bTaskFlag[i] = FlagFalse;
    }
}

/**
 * @brief   时基任务
 */
void TimeBaseSchedule()
{
    uint8_t i;

    for (i=0;i<SMALLTIMESLICE_COUNT_MAX;i++)
    {
        if (oSmallTimeSlice.rTickCount[i] < C_rSmallTickCountMax[i])
        {
            oSmallTimeSlice.rTickCount[i]++;
        }
        else
        {
            oSmallTimeSlice.bTaskFlag[i] = FlagTure;
            oSmallTimeSlice.rTickCount[i] = 1;
        }
    }

    for (i=0;i<BIGTIMESLICE_COUNT_MAX;i++)
    {
        if (oBigTimeSlice.wTickCount[i] < C_wBigTickCountMax[i])
        {
            oBigTimeSlice.wTickCount[i]++;
        }
        else
        {
            oBigTimeSlice.bTaskFlag[i] =FlagTure;
            oBigTimeSlice.wTickCount[i] = 1;
        }
    }
}


