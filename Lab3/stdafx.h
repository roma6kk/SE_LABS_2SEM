#pragma once
#include<iostream>
#include<string>
using namespace std;
int CountDay(int day, int month, int year);
bool getDate(string date, int& day, int& month, int& year);
bool isLeapYear(int year);
string getMonthName(int month);
void event_day_of_year(int day, int month);
