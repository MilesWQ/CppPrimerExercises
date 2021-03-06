#include "stdafx.h"
#include "Sales_data.h"
#include "Person.h"


/* Exercise 7.11 The class definition refers to "Sales_data.h"
 * Exercise 7.12 Refers to "Sales_data.h"
 * Exercise 7.14 Refers to "Sales_data.h"
 * Exercise 7.15 Refers to "Person.h"
 */
using namespace std;
void constructor_test();
void Exercise713();

int main()
{
	//Test constructors in person classs
	Person p1;
	print(cout, p1) << endl;

	Person p2("John Doe", "Ironforge");
	print(cout, p2) << endl;

	Person p3(cin);
	print(cout, p3) << endl;

	return 0;
}

void constructor_test() {
	//Test Exercise7.11
	Sales_data data1;
	print(cout, data1) << endl;

	Sales_data data2("X10A");
	print(cout, data2) << endl;

	Sales_data data3("X20", 5, 21);
	print(cout, data3) << endl;

	Sales_data data4(cin);
	print(cout, data4) << endl;
}
//Exercise 7.13
void Exercise713() {
	istream &is1 = cin;
	if (is1) {
		Sales_data total(is1);
		cin.clear();
		istream &is2 = cin;
		while (is2) {
			Sales_data trans(is2);
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
		cerr << "No valid data" << endl;
	}
}