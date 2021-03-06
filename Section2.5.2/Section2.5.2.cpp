#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	int i = 0, &r = i;
	auto a = r; // int
	const int ci = i, &cr = ci;
	auto b = ci; // int; Droped const.
	auto c = cr; // int; Copied the object cr refers to and droped const.
	auto d = &i; // int*
	auto e = &ci; // const int*
	const auto f = ci; // deduced type of ci is int; f has type const int
	auto &g = ci; // &const int; top level constant is also copied
	const auto &j = 42;

	//Exercise 2.33 & 2.34
	//change the value of int a to 42
	cout << a << endl;
	a = 42;
	cout << a << endl;
	//change the value of int b to 42
	cout << b << endl;
	b = 42;
	cout << b << endl;
	//change the value of int c to 42
	cout << c << endl;
	c = 42;
	cout << c << endl;
	//error;Can not assign a literl to int*
	//d = 42;
	//error;Can not assign a literl to const int*
	//e=42;
	//error;Can not change the value of a const int
	//g = 42;

	//Exercise 2.35
	const int i2 = 42;
	auto j2 = i2;//j2 = 42;
	cout << j2 << endl;
	const auto &k2 = i2; // k2 bounded to i2.
	cout << k2 << endl;
	auto *p = &i;//const int*
	const auto j3 = i2, &k3 = i2;//j3 for const int,k3 for & const int
	return 0;
}

