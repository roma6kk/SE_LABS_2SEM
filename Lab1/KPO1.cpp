#include"stdafx.h"
int main()
{
    setlocale(0, "rus");
    const int LEAP_YEAR_DAYS = 366, YEAR_DAYS = 365;
    string date;
    cout << "Введите дату: " << endl;
    cin >> date;
    int day, month, year;
    if (!getDate(date, day, month, year))
    {
        return 1;
    }
    int day_today = CountDay(day, month, year);
    bool is_leap_year = isLeapYear(year);
    cout << "День: " << day << " Месяц: " << month << " Год: " << year << endl;
    if (is_leap_year)
        cout << "Это високосный год! " << endl;
    cout << "Порядковый номер дня в году: " << day_today << endl;
    string birthday;
    cout << "Введите вашу дату рождения ДДММГГГГ: " << endl;
    cin >> birthday;
    int birthdayday, birthmonth, birthyear;
    if (!getDate(birthday, birthdayday, birthmonth, birthyear))
    {
        return 1;
    }
    cout << "Ваш День Рождения: " << endl;
    cout << "День: " << birthdayday << " Месяц: " << birthmonth << " Год: " << birthyear << endl;
    int birthday_day = CountDay(birthdayday, birthmonth, birthyear);
    int DaysTillBirthday;
    if (birthday_day > day_today)
    {
        DaysTillBirthday = birthday_day - day_today;
    }
    else if (birthday_day == day_today)
    {
        DaysTillBirthday = 0;
        cout << "Ваше День Рождения сегодня! Поздравляем!" << endl;
    }
    else if (birthday_day < day_today)
    {
        if (is_leap_year)
        {
            DaysTillBirthday = LEAP_YEAR_DAYS - day_today + birthday_day;
        }
        else
        {
            DaysTillBirthday = YEAR_DAYS - day_today + birthday_day;
        }
    }
    cout << "Количество дней до вашего Дня Рождения: " << DaysTillBirthday;
}