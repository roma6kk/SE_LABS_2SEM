#include"stdafx.h"
string getMonthName(int month)
{
	string monthName;
	string monthes[] = {"Январь", "Февраль", "Март", "Апрель", "Май", "Июнь", "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь"};
	return monthes[month - 1];
}
