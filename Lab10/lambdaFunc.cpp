#include"Header.h"
void lambdaFunc()
{
    int num1 = 1, num2 = -1;
    auto checkPositive = [](int num) { return num > 0; };

    if (checkPositive(num1))
    {
        cout << "Число положительное." << endl;
    }
    else
    {
        cout << "Число не положительное." << endl;
    }
    if (checkPositive(num2))
    {
        cout << "Число положительное." << endl;
    }
    else
    {
        cout << "Число не положительное." << endl;
    }
}