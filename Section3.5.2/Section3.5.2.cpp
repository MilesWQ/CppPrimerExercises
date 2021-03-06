#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>

/* Exercise 3.30
 * The subscript indices of the array begin at 0 so the last index in the loop is out of index range which is from 0 to 9.
 */

/*Exercise 3.33
 * We can not use an uninitialized array in a function will deliver wrong values.
*/
using namespace std;

int main()
{
	//Exercise331
	int nums[10];
	for (size_t i = 0; i != 10; ++i) {
		nums[i] = i;
	}
	cout << "Exercise3.31:" << endl;
	for (auto i : nums) {
		cout << i << " ";
	}

	int nums2[10];
	for (size_t i = 0; i != 10; ++i) {
		nums2[i] = nums[i];
	}
	cout << endl;
	//Exercise332
	cout << "Exercise3.32 copy the above array:" << endl;
	for (auto i : nums2) {
		cout << i << " ";
	}
	cout << endl;
	//using vector
	vector<int> iv;
	for (int i = 0; i != 10;++i) {
		iv.push_back(i);
	}
	cout << "using vector:" << endl;
	for (auto i : iv) {
		cout << i << " ";
	}
	cout << endl;
	//copy vector
	vector<int> iv2 = iv;
	cout << "copied vector:" << endl;
	for (auto i : iv2) {
		cout << i << " ";
	}

	return 0;
}