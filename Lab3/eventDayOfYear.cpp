#include"stdafx.h"
void event_day_of_year(int day, int month, int year)
{
	bool is_holiday = false;
	string events[] = {"���� ��������� ���������", "������������� ������� ����", "���� ������� ���������", "���� ������", "����� ���", "���� ������������"};
	if (day == 23 && month == 2)
	{
		cout << "������� - " << events[0] << endl;
		is_holiday = true;
	}
	if (day == 8 && month == 3)
	{
		cout << "������� - " << events[1] << endl;
		is_holiday = true;
	}
	if (day == 14 && month == 2)
	{
		cout << "������� - " << events[2] << endl;
		is_holiday = true;
	}
	if (day == 9 && month == 5)
	{
		cout << "������� - " << events[3] << endl;
		is_holiday = true;
	}
	if (day == 1 && month == 1)
	{
		cout << "������� - " << events[4] << endl;
		is_holiday = true;
	}
	if (CountDay(day, month, year) == 256)
	{
		cout << "������� - " << events[5] << endl;
		is_holiday = true;
	}
	if (!is_holiday)
		cout << "� ���������, ������� ������ ��� :/" << endl;


}