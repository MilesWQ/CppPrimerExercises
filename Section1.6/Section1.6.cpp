#include "stdafx.h"
#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
	//Exercise 1.25
	cout << "Please enter book transactions: " << endl;
	Sales_item totalOfSameISBN;
	if (cin >> totalOfSameISBN) {
		Sales_item transactions;
		while (cin >> transactions) {
			if (transactions.isbn() == totalOfSameISBN.isbn()) {
				totalOfSameISBN += transactions;
			}
			else {
				cout << "The summary of " << totalOfSameISBN.isbn() << " is " << totalOfSameISBN << endl;
				totalOfSameISBN = transactions;
			}
		}
		cout << totalOfSameISBN << endl;
	}
	else {
		cout << "There's no data input." << endl;
		return -1;
	}
	return 0;
}

