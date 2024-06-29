#pragma once
#include<iostream>
using namespace std;
int _cdecl sum(int x, int y, int z);
int _stdcall comp(int& x, int y, int z);
int _fastcall sum_fast(int x, int y, int z);