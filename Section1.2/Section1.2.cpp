// CPPPrimer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	//Exercise 1.3
	cout << "Hello,World" << endl;

	//Exercise 1.4
	cout << "Please enter two integers" << endl;
	int v1, v2;
	cin >> v1 >> v2;
	cout << v1 * v2 << endl;

	//Exercise 1.5 rewrite "cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << endl;"
	cout << "The sum of ";
	cout << v1;
	cout << " and ";
	cout << v2;
	cout << " is ";
	cout << v1 + v2;
	cout << endl;

	/*Exercise 1.6 The program fragment is illegal because output operators need to take an ostream object as a left-hand operand.
	However,there's a semicolon in the first line of this block finishing the 'cout' statement,and there's no ostream object on the left-hand of output operators in the following lines.
	So the statements following the first line can not be compiled.
	*/

	return 0;
}

