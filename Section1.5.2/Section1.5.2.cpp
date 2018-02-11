// Section1.5.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Sales_item.h"

using namespace std;
int main()
{
	//Exercise 1.23
	cout << "Please enter book transactions: " << endl;
	Sales_item toBeCompared, book;
	if (cin >> toBeCompared) {
		int counter = 1;
		while (cin >> book) {
			if (toBeCompared.isbn() == book.isbn()) {
				++counter;
			}
			else {
				cout << toBeCompared.isbn() << " occur " << counter << " times " << endl;
				toBeCompared = book;
				counter = 1;
			}
		}
		cout << toBeCompared.isbn() << " occur " << counter << " times " << endl;
	}
	return 0;
}

