#include "stdafx.h"
#include <iostream>
using namespace std;

void exercise410();
bool exercise411(const int &a, const int &b, const int &c, const int &d);

/*
 * Exercise4.12
 * First the expresssion will evaluate the result of j<k,returning 1 if k greater than j otherwise 0 
 *then evaluate whether i is equal to 1 or 0,returning false(0) if it's 1 otherwise true(1);
*/
int main()
{

	return 0;
}

void exercise410() {
	int input = 0;
	while (cin >> input && input != 42);
	cout << input;
}

bool exercise411(const int &a, const int &b, const int &c, const int &d) {
	if (a > b && a > b&& a > c && a > d) {
		return true;
	}
	return false;
}