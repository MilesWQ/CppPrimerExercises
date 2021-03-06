// Section1.4.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	/*Exercise 1.17 If the values input are all equal,the progrom prints the input times of these values when it meets EOF.
	 *If the input values are distinct each time,the console outputs each value counted by 1 time.
	 *Exercise 1.18 as below
	 */
	cout << "Please enter integers: " << endl;
	int valueToBeCompared = 0, input = 0;
	if (cin >> valueToBeCompared) {
		int counter = 1;
		while (cin >> input) {
			if (input == valueToBeCompared) {
				++counter;
			}
			else {
				cout << valueToBeCompared << " occured " << counter << " times" << endl;
				valueToBeCompared = input;
				counter = 1;
			}
		}
		cout << valueToBeCompared << " occured " << counter << " times" << endl;
	}

	//Exercise 1.19
	cout << "Please enter two integers which the first number is smaller than the second: " << endl;
	int first, second;
	cin >> first >> second;
	if (first < second) {
		cout << "The numbers ranging from " << first << " and " << second << " inclusive are ";
		for (int i = first; i <= second; ++i) {
			cout << i << " ";
		}
	}
	else {
		cout << "Sorry,the first number is not smaller than the second";
	}
	cout << endl;
	return 0;
}

