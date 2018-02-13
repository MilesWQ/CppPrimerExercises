// Section3.3.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <string>

using std::vector;
void Exercise314();
void Exercise315();
int main()
{
	
	return 0;
}

//Exercise3.14
void Exercise314() {
	int input = 0;
	vector<int> numbers;
	while (std::cin >> input) {
		numbers.push_back(input);
	}
	for (const auto &n : numbers) {
		std::cout << n << " ";
	}
	std::cout << std::endl;
}

//Exercise3.15
void Exercise315() {
	std::string word;
	vector<std::string> text;
	while (std::cin >> word) {
		text.push_back(word);
	}
	for (const auto &word : text) {
		std::cout << word << " ";
	}
	std::cout << std::endl;
}