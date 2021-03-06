// Section7.1.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h"
#include "Sales_data.h"
#include <iostream>
using std::cout; using std::cin; using std::endl;
/* Exercise 7.2
 * Refers to "Sales_data.h"
 *
 * Exercise 7.4
 * Refers to "Person.h".
 *
 * Exercise 7.5
 * Refers to members getName and getAddress in "Person.h".
 * They should be read only since they don't need to change the data members on which they are called.
 */

int main()
{
	//Exercise 7.3
	Sales_data total, data;
	if (cin >> total.bookNo && cin >> total.units_sold) {
		while (cin >> data.bookNo && cin >> data.units_sold) {
			if (total.isbn() == data.isbn()) {
				total.combine(data);
			}
			else {
				cout << total.isbn() << " " << total.units_sold << endl;
				total = data;
			}
		}
		cout << total.isbn() << " " << total.units_sold << endl;
	}
	////Test Exercise 7.4 & 7.5
	//Person p1;
	//p1.name = "John Doe";
	//p1.address = "51";
	//cout << p1.getName() << " " << p1.getAddress() << endl;
	return 0;
}

