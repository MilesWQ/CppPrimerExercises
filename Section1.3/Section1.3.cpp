// Section1.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	//exercise 1.8
	cout << "/*";
	cout << "*/";
	//cout<</*"*/"*/;   error statement.The correct version revised as below:
	cout <</*"*/"*/";
	cout <</* "*/" /* "/*" */;
	return 0;
}

