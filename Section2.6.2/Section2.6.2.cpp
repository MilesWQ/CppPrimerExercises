#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
struct Sales_data {
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
void Exercise121();
void Exercise122();
void Exercise123();

int main()
{
	//test
	Exercise123();
	return 0;
}

//Exercise1.21
void Exercise121() {
	Sales_data data1, data2;
	cout << "Please input ISBN and sales number: " << endl;
	cin >> data1.bookNo >> data1.units_sold;
	cin >> data2.bookNo >> data2.units_sold;
	if (data1.bookNo == data2.bookNo) {
		cout << "The total sales of " << data1.bookNo << " is " << data1.units_sold + data2.units_sold << endl;
	}
	else {
		cout << "Data must refer to the same ISBN" << endl;
	}
}

//Exercise1.22
void Exercise122() {
	Sales_data toBeCompared, currentData;
	cout << "Please input the ISBN and their sales" << endl;
	if (cin >> toBeCompared.bookNo && cin >> toBeCompared.units_sold) {
		unsigned totalSales = toBeCompared.units_sold;
		while (cin >> currentData.bookNo && cin >> currentData.units_sold) {
			if (currentData.bookNo == toBeCompared.bookNo) {
				totalSales += currentData.units_sold;
			}
		}
		cout << "The total sales of " << toBeCompared.bookNo << " is " << totalSales << endl;
	}
	else {
		cout << "No valid data input" << endl;
	}
}

//Exercise1.23 & Exercise1.24 & Exercise1.25
void Exercise123() {
	Sales_data toBeCompared, currentData;
	cout << "Please input the ISBN and their sales" << endl;
	if (cin >> toBeCompared.bookNo && cin >> toBeCompared.units_sold) {
		unsigned totalSalesOfSameISBN = toBeCompared.units_sold;
		while (cin >> currentData.bookNo && cin >> currentData.units_sold) {
			if (currentData.bookNo == toBeCompared.bookNo) {
				totalSalesOfSameISBN += currentData.units_sold;
			}
			else {
				cout << "The total sales of " << toBeCompared.bookNo << " is " << totalSalesOfSameISBN << endl;
				toBeCompared.bookNo = currentData.bookNo;
				totalSalesOfSameISBN = currentData.units_sold;
			}
		}
		cout << "The total sales of " << toBeCompared.bookNo << " is " << totalSalesOfSameISBN << endl;
	}
	else {
		cout << "No valid data input" << endl;
	}
}