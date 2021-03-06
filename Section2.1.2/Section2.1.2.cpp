// Section2.1.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	//Exercise 2.3
	//Be aware to mix signed and unsigned in expressions
	unsigned u = 10, u2 = 42;
	cout << u2 - u << endl; //32
	cout << u - u2 << endl;//4294967264
	//No risk for arithmetic between signed integers
	int i = 10, i2 = 42;
	cout << i2 - i << endl;
	cout << i - i2 << endl;
	//int "i" will be automatically converted to unsigned before subtraction.
	cout << i - u << endl;//0
	cout << u - i << endl;//0

	return 0;
}

