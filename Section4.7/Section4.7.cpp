#include "stdafx.h"
#include<vector>
#include<iostream>

using namespace std;
void exercise421();
void exercise422();
int main()
{
	exercise422();
	return 0;
}

void exercise421() {
	vector<int> iv = { 1,2,3,4,5,6,7,8,9 };
	for (auto i : iv) {
		cout << ((i % 2) ? i * 2 : i) << " ";
	}
}

void exercise422() {
	int grade = 0;
	cin >> grade;
	cout << ((grade < 60) ? "fail" : ((grade <= 75) ? "low pass" : ((grade > 90) ? "high pass" : "pass"))) << endl;

	if (grade > 90) {
		cout << "high pass";
	}
	else if (grade > 75) {
		cout << "pass";
	}
	else if (grade >= 60) {
		cout << "low pass";
	}
	else {
		cout << "fail";
	}
}