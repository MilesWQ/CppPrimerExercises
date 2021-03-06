#include "stdafx.h"
#include <iostream>
#include <vector>
#include<string>

using std::vector; using std::cout; using std::cin; using std::endl; using std::string;
void exercise324();
void exercise325();
int binarysearch(const vector<string> &text, const string &sought);
/*Exercise326
There's no addition operation available between two iterators.
*/
int main()
{
	exercise324();
	return 0;
}

//Revised section3.3.3 exercise320
void exercise324() {
	vector<int> iv;
	for (int input; cin >> input;) {
		iv.push_back(input);
	}
	cout << "Print the sum of each pair of adjacent elements." << endl;
	for (auto it = iv.cbegin(); it != (iv.cend() - 1); ++it) {
		auto it2 = it + 1;
		cout << *it + *it2 << " ";
	}
	cout << endl;
	cout << "Print the sum of the first and last elements and so on." << endl;
	auto it = iv.cbegin(), it2 = iv.cend() - 1;
	for (it; it != iv.cbegin() + (iv.cend() - iv.cbegin()) / 2; ++it) {
		cout << *it + *it2 << " ";
		--it2;
	}
}

void exercise325() {
	vector<int> iv(11);
	unsigned score;
	while (cin >> score) {
		if (score <= 100) {
			int arg = score / 10;
			++*(iv.begin() + arg);
		}
		else {
			cout << "Please input a value between 0 and 100" << endl;
		}
	}
	for (auto i : iv) {
		cout << i << " ";
	}
}
//Find a given string in a sorted vector.Return the index if it exists in that vector otherwise return -1.
int binarysearch(const vector<string> &text, const string &sought) {
	auto begin = text.cbegin(), end = text.cend(), mid = begin + (end - begin) / 2;
	while (mid != end && *mid != sought) {
		if (sought < *mid) {
			end = mid;
		}
		else if (sought > *mid) {
			begin = mid + 1;
		}
		mid = begin + (end - begin) / 2;
	}
	if (mid != end) {
		return mid - begin;
	}
	else {
		return -1;
	}
}