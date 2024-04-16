#include"stdafx.h"

int CountDay(int day, int month, int year)
{
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int dayOfYear = 0;

    for (int i = 0; i < month - 1; i++)
    {
        dayOfYear += daysInMonth[i];
    }

    if (month > 2 && isLeapYear(year))
    {
        dayOfYear++;
    }

    dayOfYear += day;

    return dayOfYear;
}