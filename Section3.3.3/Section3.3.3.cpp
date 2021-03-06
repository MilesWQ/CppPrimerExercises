// Section3.3.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <string>
#include <iostream>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

void exercise316(const vector<int>&);
void exercise316(const vector<string>&);
void testExercise316();
void exercise317();
void exercise319();
void exercise320();
void example();

/* Exercise 3.18
 * Illegal.There's no element in ivec.We can't access it through subscript.Revise version:
 * vector<int> ivec{42};
 */

int main()
{
	void example();
	return 0;
}

//Exercise 3.16
void exercise316(const vector<int> &v) {
	if (!v.empty()) {
		cout << "The size is " << v.size() << endl;
		for (const auto &item : v) {
			cout << item << " ";
		}
	}
	else {
		cout << "empty vector";
	}
}

//Exercise 3.16 overload
void exercise316(const vector<string> &v) {
	if (!v.empty()) {
		cout << "The size is " << v.size() << endl;
		for (const auto &item : v) {
			cout << item << " ";
		}
	}
	else {
		cout << "empty vector";
	}
}

void testExercise316() {
	//Test for Exercise3.16
	vector<int> v1;
	exercise316(v1);
	cout << endl;

	vector<int> v2(10);
	exercise316(v2);
	cout << endl;

	vector<int> v3(10, 42);
	exercise316(v3);
	cout << endl;

	vector<int> v4{ 10 };
	exercise316(v4);
	cout << endl;

	vector<int> v5{ 10,42 };
	exercise316(v5);
	cout << endl;

	vector<string> v6{ 10 };
	exercise316(v6);
	cout << endl;

	vector<string> v7{ 10,"hi" };
	exercise316(v7);
	cout << endl;
}

//Exercise 3.17
void exercise317() {
	string word;
	vector<string> text;
	while (cin >> word) {
		for (auto &c : word) {
			c = toupper(c);
		}
		text.push_back(word);
	}
	for (decltype(text.size()) i = 0; i != text.size(); ++i) {
		if (i != 0 && i % 8 == 0) {
			cout << endl;
		}
		cout << text[i] << " ";
	}
}

//Exercise 3.19
void exercise319() {
	vector<int> v1(10, 42);
	vector<int> v2 = v1;
	vector<int> v3 = { 42,42,42,42,42,42,42,42,42,42 };
	vector<int> v4;
	for (int i = 0; i != 10; ++i) {
		v4.push_back(42);
	}
}

//Exercise 3.20 
void exercise320() {
	int input;
	vector<int> ivec;
	while (cin >> input) {
		ivec.push_back(input);
	}
	////Print the sum of each pair of adjacent elements.
	if (ivec.size() >= 2) {
		for (decltype(ivec.size()) i = 0; i != ivec.size() - 1; ++i) {
			cout << ivec[i] + ivec[i + 1] << " ";
		}
	}
	else if (!ivec.empty()) {
		cout << "only one number: " << ivec[0];
	}
	else {
		cout << "No data";
	}
	cout << endl;
	//prints the sum of the first and last elements, followed by the sum of the second and second to last, and so on.
	if (ivec.size() >= 2) {
		for (decltype(ivec.size()) i = 0; i != ivec.size() / 2; ++i) {
			cout << ivec[i] + ivec[ivec.size() - 1 - i] << " ";
		}
	}
	else if (!ivec.empty()) {
		cout << "only one number: " << ivec[0];
	}
	else {
		cout << "No data";
	}
}

/* An example of count grade on the book 3.3.3.Below texts quote from the book:
 * "We have a collection of grades that range from 0 through 100.
 *  We’d like to count how many grades fall into various clusters of 10.
 *  If we input 42 65 95 100 39 67 95 76 88 76 83 92 76 93.then the output should be 0 0 0 1 1 0 2 3 2 4 1.
 */
void example() {
	unsigned score;
	vector<int> grade(11, 0);
	while (cin >> score) {
		if (score <= 100) {
			decltype(grade.size()) index = score / 10;
			++grade[index];
		}
		else {
			std::cout << "the score should be between 0 and 100 inclusive." << endl;
		}
	}
	for (auto i : grade) {
		std::cout << i << " ";
	}
}