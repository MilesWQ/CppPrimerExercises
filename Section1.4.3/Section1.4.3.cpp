// Section1.4.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	//Exercise 1.4.3
	cout << "Please enter integers: " << endl;
	int sum = 0, input = 0;
	while (cin >> input) {
		sum += input;
	}
	cout << "The sum is " << sum << endl;
	return 0;
}

