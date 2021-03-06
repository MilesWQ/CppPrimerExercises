// Section3.2.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <cctype>

using namespace std;
void Exercise36();
void Exercise38();
void Exercise310();

int main()
{

	return 0;
}

//Exercise 3.6
void Exercise36() {
	string s("some thing");
	for (char &c : s) {
		c = 'X';
	}
	cout << s << endl;
}

/*Exercise 3.7
It can't change the value of each character by char type iterator in a for range loop.Instead char& is needed.
*/

//Exercise3.8
void Exercise38() {
	string s("some thing");
	//while loop
	decltype(s.size())index = 0;
	while (index != s.size()) {
		s[index] = 'X';
		++index;
	}
	cout << s << endl;
	//for loop
	for (decltype(s.size())index = 0; index != s.size(); ++index) {
		s[index] = 'X';
	}
	cout << s << endl;
}

//Exercise 3.10
void Exercise310() {
	string s;
	cin >> s;
	if (s.size() > 0) {
		for (auto c : s) {
			if (!ispunct(c)) {
				cout << c;
			}
		}
		cout << endl;
	}
	else {
		cout << "The input is empty string" << endl;
	}
}

/* Exercise 3.11
 * We can't change the value through the &c due to constant elements in s.We can read or output each character iterated by &c.
 */

