#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	//Exercise 4.4
	int result1 = (((12 / 3) * 4) + (5 * 15)) + ((24 % 4) / 2);
	int result2 = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
	cout << result1 << " " << result2 << endl;

	//Exercise4.5
	//-86
	cout << -30 * 3 + 21 / 5 << endl;
	//-18
	cout << -30 + 3 * 21 / 5 << endl;
	//0 "*","?" and "%" have the same precedence.
	cout << 30 / 3 * 21 % 5 << endl;
	//-2
	cout << -30 / 3 * 21 % 4 << endl;
	return 0;
}

