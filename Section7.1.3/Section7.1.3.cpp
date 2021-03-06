// Section7.1.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Sales_data.h"
#include "Person.h"
/* Exercise 7.6
 * Refers to "Sales_data.h".
 *
 * Exercise 7.8
 * Because the argument of class object passed in the read funcion will be changed through the reference parameter
 * when funtcion is executing, we can't set this parameter as references to const.
 * However,the print function don't need to modify the class object that passed in,
 * so keeping the class object parameter as reference to const is safe and feasible.
 *
 * Exercise 7.9
 * Refers to "Person.h".
 *
 * Exercise 7.10
 * Read two objects sequentially and test whether each input is successful or not.
 */

using namespace std;
void person_test();
int main()
{
	//Exercise 7.7
	Sales_data total;
	cout << "Please enter bookNo,units sold and unit price:\n";
	if (read(cin, total)) {
		Sales_data trans;
		while (read(cin, trans)) {
			if (total.isbn() == trans.isbn()) {
				total.combine(trans);
			}
			else {
				print(cout, total) << endl;
				total = trans;
			}
		}
		print(cout, total) << endl;
	}
	else {
		cerr << "No data" << endl;
	}

	return 0;
}

void person_test() {
	//Test Exercise 7.9
	Person p1, p2;
	read(read(cin, p1), p2);
	print(cout, p1) << endl;
	print(cout, p2) << endl;
}