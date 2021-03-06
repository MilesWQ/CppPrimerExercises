#include "stdafx.h"
#include<iostream>
#include <vector>

void Exercise335();
void Exercise336A();
void Exercise336B();
using namespace std;
int main()
{
	Exercise335();
	cout << endl;
	Exercise336A();
	Exercise336B();
	return 0;
}

void Exercise335() {
	int arr[10] = {};
	int *p = begin(arr);
	int *endp = end(arr);
	for (int *i = p; i != endp; ++i) {
		*p = 0;
	}
	for (auto i : arr) {
		cout << i << " ";
	}
}
//compare two arrays
void Exercise336A() {
	int arr1[] = { 10,20,30,40,50,60 };
	int arr2[] = { 10,20,30,40,50,60 };
	int *p1 = begin(arr1), *endp1 = end(arr1), *p2 = begin(arr2), *endp2 = end(arr2);
	if (endp1 - p1 == endp2 - p2) {
		for (p1; p1 != endp1; ++p1) {
			if (*p1 == *p2) {
				++p2;
			}
			else {
				break;
			}
		}
		if (p1 == endp1) {
			cout << "The two arrays are equal" << endl;
		}
		else {
			cout << "The number at index " << p1 - begin(arr1) << " is different" << endl;
		}
	}
	else {
		cout << "inequality" << endl;
	}
}

//compare two vectors
void Exercise336B() {
	vector<int> iv1 = { 10,20,30,40,50,60 };
	vector<int> iv2 = { 10,20,30,40,50,60 };
	if (iv1 == iv2){
		cout << "They are equal" << endl;
	}
	else {
		cout << "inequality" << endl;
	}
}