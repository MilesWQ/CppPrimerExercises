
#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;
void Exercise32();
void Exercise34();
void Exercise35();

int main()
{
	return 0;
}

//Exercise3.2
void Exercise32() {
	//read a line
	string s1;
	getline(cin, s1);
	cout << s1 << endl;
	//read a word
	string s2;
	cin >> s2;
	cout << s2 << endl;
}

//Exercise3.4
void Exercise34() {
	string s1, s2;
	cin >> s1 >> s2;
	if (s1 != s2) {
		s1 > s2 ? cout << s1 << " is larger." << endl : cout << s2 << " is larger." << endl;
	}
	else {
		cout << "They are equal" << endl;
	}
	if (s1.size() != s2.size()) {
		s1.size() > s2.size() ? cout << s1 << " is longer" << endl : cout << s2 << " is longer" << endl;
	}
	else {
		cout << "They have the same length." << endl;
	}
}

//Exercise 3.5
void Exercise35() {
	string input, total;
	while (cin >> input) {
		total += input;
	}
	cout << total << endl;
	cin.clear();
	//change the program to separate adjacent input
	cout << "Please input strings" << endl;
	string input2, total2;
	while (cin >> input2) {
		total2 += input2 + " ";
	}
	cout << total2 << endl;
}