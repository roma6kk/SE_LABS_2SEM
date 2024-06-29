#include<iostream>
using namespace std;
int defaultparm(int parm1, int parm2, int parm3, int parm4, int parm5, int parm6 = 0, int parm7 = 0)
{
	return (parm1 + parm2 + parm3 + parm4 + parm5 + parm6 + parm7) / 7;
}
int main()
{
	setlocale(0, "rus");
	cout << defaultparm(1, 2, 3, 4, 5) << endl;
	cout << defaultparm(1, 2, 3, 4, 5, 6, 7) << endl;

}

