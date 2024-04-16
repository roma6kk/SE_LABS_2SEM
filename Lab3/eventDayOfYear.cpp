#include"stdafx.h"
void event_day_of_year(int day, int month, int year)
{
	bool is_holiday = false;
	string events[] = {"День защитника отечества", "Международный женский день", "День Святого Валентина", "День Победы", "Новый Год", "День Программиста"};
	if (day == 23 && month == 2)
	{
		cout << "Сегодня - " << events[0] << endl;
		is_holiday = true;
	}
	if (day == 8 && month == 3)
	{
		cout << "Сегодня - " << events[1] << endl;
		is_holiday = true;
	}
	if (day == 14 && month == 2)
	{
		cout << "Сегодня - " << events[2] << endl;
		is_holiday = true;
	}
	if (day == 9 && month == 5)
	{
		cout << "Сегодня - " << events[3] << endl;
		is_holiday = true;
	}
	if (day == 1 && month == 1)
	{
		cout << "Сегодня - " << events[4] << endl;
		is_holiday = true;
	}
	if (CountDay(day, month, year) == 256)
	{
		cout << "Сегодня - " << events[5] << endl;
		is_holiday = true;
	}
	if (!is_holiday)
		cout << "К сожалению, сегодня повода нет :/" << endl;


}