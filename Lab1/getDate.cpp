#include"stdafx.h"
bool getDate(string date, int& day, int& month, int& year)
{
    const int DATEFORM = 8;
    if (date.length() != DATEFORM)
    {
        cerr << "������������ ���� ����!" << endl;
        return false;
    }
    for (int i = 0; i < date.size(); i++)
    {
        if(!isdigit(date[i]))
        {
            cerr << "������������ ���� ����!" << endl;
            return false;
        }
    }
    day = stoi(date.substr(0, 2));
    month = stoi(date.substr(2, 2));
    year = stoi(date.substr(4, 4));

}