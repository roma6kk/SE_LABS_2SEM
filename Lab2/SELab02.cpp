#include<iostream>
using namespace std;

int func()
{
	cout << "Это - функция." << endl;
	return 0;
}
int main()
{
	setlocale(0, "rus");
	const int n = 1;
	int X = 9 + n;// 10
	int Y = 10 + n;// 11
	int Z = 11 + n;// 12
	float S = 1.0 + n;// 2.0
	bool bool_false = false;// 00
	bool bool_true = true;// 01
	char symbol = 'n';// 6e
	char symbol_rus = 'н';// ed
	wchar_t wsymbol = L'A';// 0041
	wchar_t wsymbol_rus = L'А';// 0410
	// Шетснадцатеричное значение X = A
	short uns_var = X;// 10
	// X = 1010(2), инвертируем биты 0101 и добавляем 1 0110, переводим в 16 сс, -X = -6
	short s_var = -X;// -10
	// Шестнадцатеричное значение самого большого числа short(32767) = 7FFF
	const short short_max = 0x7FFF;
	// Шестнадцатеричное значение самого малого числа short(-32768) = 8000
	const short short_min = 0x8000;
	// Шестнадцатеричное значение самого большого числа unsigned short(65535) = FFFF
	const unsigned short uns_short_max = 0xFFFF;
	// Шестнадцатеричное значение самого малого числа unsigned short = 0
	const unsigned short uns_short_min = 0;
	// Шестнадцатеричное значение Y = B
	int var = Y;
	// Шестнадцатеричное значение -Y = -5
	int m_var = -Y;
	// Шестнадцатеричное значение самого большого числа int(2147483647) = 7FFFFFFF
	const int int_max = 0x7FFFFFFF;
	// Шестнадцатеричное значение самого малого числа int(−2147483648) = 80000000
	const int int_min = 0x80000000;
	// Шестнадцатеричное значение самого большого числа unsigned int(4294967295) = FFFFFFFF
	const unsigned int uns_int_max = 0xFFFFFFFF;
	// Шестнадцатеричное значение самого малого числа unsigned int(0) = 0
	const unsigned int uns_int_min = 0x0;
	// Шестнадцатеричное значение Z = C
	long l_var = Z;
	// Шестнадцатеричное значение -Z = -4
	long s_l_var = -Z;
	// Шестнадцатеричное значение самого большого числа long(2147483647) = 7FFFFFFF
	const long long_max = 0x7FFFFFFF;
	// Шестнадцатеричное значение самого малого числа long(-2147483648) = 80000000
	const long long_min = 0x80000000;
	// Шестнадцатеричное значение самого большого числа unsigned long(4294967295) = FFFFFFFF
	const unsigned long uns_long_max = 0xFFFFFFFF;
	// Шестнадцатеричное значение самого малого числа unsigned long(0) = 0
	const unsigned long uns_long_min = 0x0;
	// Шетснадцатеричное значение S = 4
	// Знак: 0 (положительное число)
	// Экспонента: 01111111 (смещенная экспонента : 127)
	// Мантисса : 00000000000000000000000 (23 нуля)
	// Итого: 01000000000000000000000000000000
	float uns_f_var = S;// 2.0
	// Шестнадцатеричное значение -S = -C
	// Знак: 1 (отрциательное число)
	// Экспонента: 01111111 (смещенная экспонента : 127)
	// Мантисса : 00000000000000000000000 (23 нуля)
	// Итого: 11000000000000000000000000000000
	float s_f_var = -S;// -2.0
	// inf = 7FF
	// Значения +∞ и −∞ представляются с экспонентой из одних единиц и мантиссой из одних нулей. Разряд знака определяет знак бесконечности.
	double inf = X/0.f;
	// neg_inf = FF8
	float neg_inf = -X/0.f;
	// neg_ind = FFC
	float neg_ind = sqrt(-2.0f);
	char* char_ptr = &symbol;
	wchar_t* wchar_ptr = &wsymbol;
	short* short_ptr = &uns_var;
	int* int_ptr = &Y;	
	float* float_ptr = &S;
	double* double_ptr = &inf;
	//
	char_ptr += 3;

	int (*func_ptr)() = func;
	func_ptr();
	//
}