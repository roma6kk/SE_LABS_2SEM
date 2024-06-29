﻿#include"D:\Poman\prog\C++\2SEM\SE_Lab06S\SE_Lab06L\Dictionary.h"
#pragma comment(lib, "D:\\Poman\\prog\\C++\\2SEM\\SE_Lab06S\\Debug\\SE_Lab06L.lib")
#if defined(TEST_CREATE_01) + defined(TEST_CREATE_02) + defined(TEST_ADDENTRY_03) + defined(TEST_ADDENTRY_04) + defined(TEST_GETENTRY_05) + defined(TEST_GETENTRY_06) + defined(TEST_UPDENTRY_07) + defined(TEST_UPDENTRY_08) + defined(TEST_DICTIONARY) > 1
#error "Only 1 macros can be defined at a time"
#endif
//#define TEST_CREATE_01 
//#define TEST_CREATE_02
//#define TEST_ADDENTRY_03
//#define TEST_ADDENTRY_04
//#define TEST_GETENTRY_05
#define TEST_DELENTRY_06
//#define TEST_UPDENTRY_07
//#define TEST_UPDENTRY_08
//#define TEST_DICTIONARY
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
#ifdef TEST_DICTIONARY
	try
	{
		Dictionary::Instance d1 = Dictionary::Create("Преподаватели", 7);
		Dictionary::Entry e1 = { 1, "Гладкий" }, e2 = { 2, "Веялкин" }, e3 = { 3, "Смелов" }, e4 = { 4, "Урбанович" }, e5 = { 5, "Пацей" }, e7 = { 7, "Lorem1" }, e8 = { 8, "Lorem2" }, e9 = { 9, "Lorem3" }, e10 = { 10, "Lorem" };
		Dictionary::AddEntry(d1, e1);
		Dictionary::AddEntry(d1, e2);
		Dictionary::AddEntry(d1, e3);
		Dictionary::AddEntry(d1, e4);
		Dictionary::AddEntry(d1, e7);
		Dictionary::AddEntry(d1, e8);
		Dictionary::AddEntry(d1, e9);
		Dictionary::Entry ex2 = Dictionary::GetEntry(d1, 4);
		Dictionary::DelEntry(d1, 2);
		Dictionary::AddEntry(d1, e10);
		Dictionary::Entry newentry1 = { 6, "Гурин" };
		Dictionary::UpdEntry(d1, 3, newentry1);
		cout << "--------- Преподаватели --------- " << endl;
		Dictionary::Print(d1);
		Dictionary::Instance d2 = Dictionary::Create("Студенты", 7);
		Dictionary::Entry s1 = { 1, "Иванов" }, s2 = { 2, "Петров" }, s3 = { 3, "Сидоров" }, s4 = { 4, "Lorem4" }, s5 = { 5, "Lorem5" }, s6 = { 6, "Lorem6" }, s7 = { 7, "Lorem7" };
		Dictionary::AddEntry(d2, s1);
		Dictionary::AddEntry(d2, s2);
		Dictionary::AddEntry(d2, s3);
		Dictionary::AddEntry(d2, s4);
		Dictionary::AddEntry(d2, s5);
		Dictionary::AddEntry(d2, s6);
		Dictionary::AddEntry(d2, s7);
		Dictionary::Entry newentry3 = { 3,"Николаев" };
		Dictionary::UpdEntry(d2, 3, newentry3);
		cout << "--------- Студенты ---------" << endl;
		Dictionary::Print(d2);
		Delete(d1);
		Delete(d2);
	}
	catch (const char* e)
	{
		cout << e << endl;
	}
#endif
#ifdef TEST_CREATE_01
	try
	{
		Dictionary::Create("hbkberjgeoigjkjbeijegpierjb", 5);
	}
	catch (const char* e)
	{
		cout << e << endl;
	}
#endif

#ifdef TEST_CREATE_02
	try
	{
		Dictionary::Create("wgeiuwb", 101);
	}
	catch (const char* e)
	{
		cout << e << endl;
	}
#endif
#ifdef TEST_ADDENTRY_03	
	try
	{
		Dictionary::Instance TEST = Dictionary::Create("TEST", 2);
		Dictionary::Entry e1 = { 1, "hwbefjw" }, e2 = { 2, "grjwjngwg" }, e3 = { 3, "wuhguwbeg" };
		Dictionary::AddEntry(TEST, e1);
		Dictionary::AddEntry(TEST, e2);
		Dictionary::AddEntry(TEST, e3);
	}
	catch (const char* e)
	{
		cout << e << endl;
	}
#endif
#ifdef TEST_ADDENTRY_04

	try
	{
		Dictionary::Instance TEST = Dictionary::Create("TEST", 3);
		Dictionary::Entry e1 = { 1, "hwbefjw" }, e2 = { 2, "grjwjngwg" }, e3 = { 2, "wuhguwbeg" };
		Dictionary::AddEntry(TEST, e1);
		Dictionary::AddEntry(TEST, e2);
		Dictionary::AddEntry(TEST, e3);
	}
	catch (const char* e)
	{
		cout << e << endl;
	}
#endif
#ifdef TEST_GETENTRY_05
	try
	{
		Dictionary::Instance TEST = Dictionary::Create("TEST", 3);
		Dictionary::Entry e1 = { 1, "hwbefjw" }, e2 = { 2, "grjwjngwg" }, e3 = { 3, "wuhguwbeg" };
		Dictionary::AddEntry(TEST, e1);
		Dictionary::AddEntry(TEST, e2);
		Dictionary::AddEntry(TEST, e3);
		Dictionary::GetEntry(TEST, 4);
	}
	catch (const char* e)
	{
		cout << e << endl;
	}
#endif
#ifdef TEST_DELENTRY_06	
	try
	{
		Dictionary::Instance TEST = Dictionary::Create("TEST", 3);
		Dictionary::Entry e1 = { 1, "hwbefjw" }, e2 = { 2, "grjwjngwg" }, e3 = { 3, "wuhguwbeg" };
		Dictionary::AddEntry(TEST, e1);
		Dictionary::AddEntry(TEST, e2);
		Dictionary::AddEntry(TEST, e3);
		Dictionary::DelEntry(TEST, 4);
	}
	catch (const char* e)
	{
		cout << e << endl;
	}
#endif		
#ifdef TEST_UPDENTRY_07
	try
	{
		Dictionary::Instance TEST = Dictionary::Create("TEST", 3);
		Dictionary::Entry e1 = { 1, "hwbefjw" }, e2 = { 2, "grjwjngwg" }, e3 = { 3, "wuhguwbeg" };
		Dictionary::AddEntry(TEST, e1);
		Dictionary::AddEntry(TEST, e2);
		Dictionary::AddEntry(TEST, e3);
		Dictionary::UpdEntry(TEST, 4, e2);
	}
	catch (const char* e)
	{
		cout << e << endl;
	}
#endif 
#ifdef TEST_UPDENTRY_08
	try
	{
		Dictionary::Instance TEST = Dictionary::Create("TEST", 3);
		Dictionary::Entry e1 = { 1, "hwbefjw" }, e2 = { 2, "grjwjngwg" }, e3 = { 3, "wuhguwbeg" };
		Dictionary::AddEntry(TEST, e1);
		Dictionary::AddEntry(TEST, e2);
		Dictionary::AddEntry(TEST, e3);
		Dictionary::Entry ed2 = { 3, "woihgiowegiweg" };
		Dictionary::UpdEntry(TEST, 2, ed2);
	}
	catch (const char* e)
	{
		cout << e << endl;
	}
#endif
	system("pause");
	return 0;
}