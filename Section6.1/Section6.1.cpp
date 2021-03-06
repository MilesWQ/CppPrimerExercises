#include "stdafx.h"
#include <iostream>

using namespace std;

long fact(long val);
void calculateFact();
int absolute(int val);
long factorial(long val);

int main() {

	//Test 6.3
	int i = factorial(6);
	cout << i << endl;

	//Test 6.4
	calculateFact();

	//Test 6.5
	int i1 = absolute(0);
	int i2 = absolute(-9);
	cout << i1 << " " << i2 << endl;

	return 0;
}

//Exercise 6.3
long fact(long val) {
	long factorial = 1;
	while (val > 1) {
		factorial *= val--;
	}
	return factorial;
}
//another version of factorial
long factorial(long val) {
	if (val == 1) {
		return 1;
	}
	else {
		return factorial(val - 1)*val;
	}
}

//Exercise6.4
void calculateFact() {
	cout << "Please enter an integer" << endl;
	long input;
	cin >> input;
	long result = fact(input);
	cout << "The result is " << result << endl;
}

//Exercise6.5
int absolute(int val) {
	if (val >= 0) {
		return val;
	}
	return -val;
}