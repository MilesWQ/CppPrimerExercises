// Section1.4.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	//Exercise 1.9
	int sum = 0, val = 50;
	while (val <= 100) {
		sum += val;
		++val;
	}
	cout << "Sum of 50 to 100 inclusive is " << sum << endl;

	//Exercise 1.10
	int val2 = 10;
	while (val2 >= 0) {
		cout << val2-- << endl;
	}

	//Exercise 1.11
	cout << "Please enter two integers: " << endl;
	int first, second, toBePrinted;
	cin >> first >> second;
	cout << "The numbers ranging from " << first << " and " << second << "inclusive are ";
	if (first >= second) {
		toBePrinted = second;
		while (toBePrinted <= first) {
			cout << toBePrinted++ << " ";
		}
	}
	else {
		toBePrinted = first;
		while (toBePrinted <= second) {
			cout << toBePrinted++ << " ";
		}
	}
	cout << endl;

	return 0;
}

