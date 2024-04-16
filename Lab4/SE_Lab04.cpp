#include<iostream>
using namespace std;
typedef unsigned char day;
typedef unsigned char moth;
typedef unsigned short year;
struct date
{
	day dd;
	moth mm;
	year yyyy;
    // Перегрузка оператора ==
    bool operator==(const date& other) const {
        return (dd == other.dd) && (mm == other.mm) && (yyyy == other.yyyy);
    }

    // Перегрузка оператора <
    bool operator<(const date& other) const {
        if (yyyy < other.yyyy)
            return true;
        else if (yyyy == other.yyyy && mm < other.mm)
            return true;
        else if (yyyy == other.yyyy && mm == other.mm && dd < other.dd)
            return true;
        else
            return false;
    }

    // Перегрузка оператора >
    bool operator>(const date& other) const {
        return (other < *this);
    }
};

typedef string acc_number;
typedef string dep_type;
typedef double balance;
typedef string open_date;
typedef string owner;
typedef bool sms_alert;
typedef bool online_banking;
struct bank_acc
{
    acc_number an;
    dep_type dt;
    balance b;
    open_date od;
    owner o;
    sms_alert sa;
    online_banking ob;
    bool operator==(const bank_acc& other) const
    {
        return an == other.an && dt == other.dt && b == other.b && od == other.od && o == other.o && sa == other.sa && ob == other.ob;
    }
    bool operator<(const bank_acc& other) const {
        return b < other.b;
    }
};

int main()
{
    date date1 = { 7,1,1980 };
    date date2 = { 7,2,1993 };
    date date3 = { 7,1,1980 };
	setlocale(0, "rus");
    if (date1 == date2) {
        cout << "Истина" << endl;
    }

    if (date1 < date2)
        cout << "Истина" << endl;
    else
        cout << "Ложь" << endl;

    if (date1 > date2) 
        cout << "Истина" << endl;
    else
        cout << "Ложь" << endl;
    if(date1 == date3)
        cout << "Истина" << endl;
    else
        cout << "Ложь" << endl;
    bank_acc acc1 = { "12345678", "Savings", 17162.124, "21.01.2013", "Петров Петр Петрович", false, false };
    bank_acc acc2 = { "87654321", "Checking", 12.93, "13.06.2021", "Непетров Петр Петрович", true, true };
    bank_acc acc3 = { "12345321", "Checking", 9999.10, "01.01.1990", "Романов Роман Романович", false, true };
    bank_acc acc4 = { "12345321", "Checking", 9999.10, "01.01.1990", "Романов Роман Романович", false, true };
    if (acc1 < acc2)
        cout << "У пользователя " << acc1.o << " баланс меньше на " << acc2.b - acc1.b << endl;
    else
        {
            cout << "У пользователя " << acc1.o << " баланс больше или равен балансу пользователя " << acc2.o<< endl;
        }
    if (acc3 == acc4)
        cout << "Возможно, дубликат счета" << endl;


}