#include "TimeSliceTask.h"
/************************************************
�������� �� TimeSlice10MSTask
��    �� �� 10ms��ʱ������
��    �� �� void
�� �� ֵ �� void
��    �� �� 
*************************************************/
void TimeSlice10MSTask(void)
{

}
/************************************************
�������� �� TimeSlice50MSTask
��    �� �� 50ms��ʱ������
��    �� �� void
�� �� ֵ �� void
��    �� �� 
*************************************************/
void TimeSlice50MSTask(void)
{
  
}
/************************************************
�������� �� TimeSlice100MSTask
��    �� �� 100ms��ʱ������
��    �� �� void
�� �� ֵ �� void
��    �� �� 
*************************************************/
void TimeSlice100MSTask(void)
{
    
}
/************************************************
�������� �� TimeSlice200MSTask
��    �� �� 200ms��ʱ������
��    �� �� void
�� �� ֵ �� void
��    �� �� 
*************************************************/
void TimeSlice200MSTask(void)
{

}
/************************************************
�������� �� TimeSlice500MSTask
��    �� �� 500ms��ʱ������
��    �� �� void
�� �� ֵ �� void
��    �� �� 
*************************************************/
void TimeSlice500MSTask(void)
{


}
/************************************************
�������� �� TimeSlice1STask
��    �� �� 1s��ʱ������
��    �� �� void
�� �� ֵ �� void
��    �� �� 
*************************************************/
void TimeSlice1STask(void)
{


}
/************************************************
�������� �� TimeSlice5STask
��    �� ��5s��ʱ������
��    �� �� void
�� �� ֵ �� void
��    �� �� 
*************************************************/
void TimeSlice5STask(void)
{

}
/************************************************
�������� �� TimeSlice1MINTask
��    �� �� 1min��ʱ������
��    �� �� void
�� �� ֵ �� void
��    �� �� 
*************************************************/
void TimeSlice1MINTask(void)
{

}
/************************************************
�������� �� TimeSliceTaskSchedule
��    �� �� ʱ��Ƭ��ѯ
��    �� �� void
�� �� ֵ �� void
��    �� �� 
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

