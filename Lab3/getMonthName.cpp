#include"stdafx.h"
string getMonthName(int month)
{
	string monthName;
	string monthes[] = {"������", "�������", "����", "������", "���", "����", "����", "������", "��������", "�������", "������", "�������"};
	return monthes[month - 1];
}
