#include "stdafx.h"
#include "Exercises321.h"
#include <vector>
#include <iostream>
#include <cctype>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

void Exercise321();
void Exercise322();
void Exercise323();
int main()
{
	Exercise322();
	return 0;
}

void Exercise321() {
	vector<int> v1;
	Exercises321 test1(v1, 1);
	test1.print();
	cout << endl;

	vector<int> v2(10);
	Exercises321 test2(v2, 1);
	test2.print();
	cout << endl;

	vector<int> v3(10, 42);
	Exercises321 test3(v3, 1);
	test3.print();
	cout << endl;

	vector<int> v4{ 10 };
	Exercises321 test4(v4, 1);
	test4.print();
	cout << endl;

	vector<int> v5{ 10,42 };
	Exercises321 test5(v5, 1);
	test5.print();
	cout << endl;

	vector<string> v6{ 10 };
	Exercises321 test6(v6, 0);
	test6.print();
	cout << endl;

	vector<string> v7{ 10,"hi" };
	Exercises321 test7(v7, 0);
	test7.print();
	cout << endl;
}

void Exercise322() {
	vector<string> text;
	for (string line; getline(cin, line);) {
		text.push_back(line);
	}
	for (auto it = text.begin(); it != text.end(); ++it) {
		for (auto& c : *it) c = toupper(c);
		cout << *it << endl;
	}

}

void Exercise323() {
	vector<int>ivec(10);
	int input;
	auto iterator = ivec.begin();
	while (cin >> input) {
		*iterator++ = input;
	}
	for (iterator = ivec.begin(); iterator != ivec.end(); ++iterator) {
		*iterator *= 2;
		cout << *iterator << " ";
	}
}