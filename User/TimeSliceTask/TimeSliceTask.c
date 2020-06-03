#include "TimeSliceTask.h"
/************************************************
函数名称 ： TimeSlice10MSTask
功    能 ： 10ms定时器函数
参    数 ： void
返 回 值 ： void
作    者 ： 
*************************************************/
void TimeSlice10MSTask(void)
{

}
/************************************************
函数名称 ： TimeSlice50MSTask
功    能 ： 50ms定时器函数
参    数 ： void
返 回 值 ： void
作    者 ： 
*************************************************/
void TimeSlice50MSTask(void)
{
  
}
/************************************************
函数名称 ： TimeSlice100MSTask
功    能 ： 100ms定时器函数
参    数 ： void
返 回 值 ： void
作    者 ： 
*************************************************/
void TimeSlice100MSTask(void)
{
    
}
/************************************************
函数名称 ： TimeSlice200MSTask
功    能 ： 200ms定时器函数
参    数 ： void
返 回 值 ： void
作    者 ： 
*************************************************/
void TimeSlice200MSTask(void)
{

}
/************************************************
函数名称 ： TimeSlice500MSTask
功    能 ： 500ms定时器函数
参    数 ： void
返 回 值 ： void
作    者 ： 
*************************************************/
void TimeSlice500MSTask(void)
{


}
/************************************************
函数名称 ： TimeSlice1STask
功    能 ： 1s定时器函数
参    数 ： void
返 回 值 ： void
作    者 ： 
*************************************************/
void TimeSlice1STask(void)
{


}
/************************************************
函数名称 ： TimeSlice5STask
功    能 ：5s定时器函数
参    数 ： void
返 回 值 ： void
作    者 ： 
*************************************************/
void TimeSlice5STask(void)
{

}
/************************************************
函数名称 ： TimeSlice1MINTask
功    能 ： 1min定时器函数
参    数 ： void
返 回 值 ： void
作    者 ： 
*************************************************/
void TimeSlice1MINTask(void)
{

}
/************************************************
函数名称 ： TimeSliceTaskSchedule
功    能 ： 时间片轮询
参    数 ： void
返 回 值 ： void
作    者 ： 
*************************************************/
void  TimeSliceTaskSchedule(void)
{
  if (oSmallTimeSlice.bTaskFlag[TIMESLICE_10MS]==FlagTure)
    {
        oSmallTimeSlice.bTaskFlag[TIMESLICE_10MS] = FlagFalse;
        TimeSlice10MSTask();
    }
    if (oSmallTimeSlice.bTaskFlag[TIMESLICE_50MS]==FlagTure)
    {
        oSmallTimeSlice.bTaskFlag[TIMESLICE_50MS] = FlagFalse;
        TimeSlice50MSTask();
    }
    if (oSmallTimeSlice.bTaskFlag[TIMESLICE_100MS]==FlagTure)
    {
        oSmallTimeSlice.bTaskFlag[TIMESLICE_100MS] = FlagFalse;
        TimeSlice100MSTask();
    }
    if (oSmallTimeSlice.bTaskFlag[TIMESLICE_200MS]==FlagTure)
    {
        oSmallTimeSlice.bTaskFlag[TIMESLICE_200MS] = FlagFalse;
        TimeSlice200MSTask();
    }
    if (oBigTimeSlice.bTaskFlag[TIMESLICE_500MS]==FlagTure)
    {   
        oBigTimeSlice.bTaskFlag[TIMESLICE_500MS] = FlagFalse;
        TimeSlice500MSTask();
    }
    if (oBigTimeSlice.bTaskFlag[TIMESLICE_1S]==FlagTure)
    {
        oBigTimeSlice.bTaskFlag[TIMESLICE_1S] = FlagFalse;
        TimeSlice1STask();
    }
    if (oBigTimeSlice.bTaskFlag[TIMESLICE_5S]==FlagTure)
    {
        oBigTimeSlice.bTaskFlag[TIMESLICE_5S] = FlagFalse;
        TimeSlice5STask();
    }
    if (oBigTimeSlice.bTaskFlag[TIMESLICE_1MIN]==FlagTure)
    {
        oBigTimeSlice.bTaskFlag[TIMESLICE_1MIN] = FlagFalse;
        TimeSlice1MINTask();
    }



}

