
#include "stdafx.h"
#include <vector>
#include<string>

using std::vector; using std::string;
/* Exercise3.12
 * (a) vector<vector<int>> ivec;  Ok.Defines a vector contains vectors of int.
 * (b) vector<string> svc = ivec; Error ivec is is a type of vector<int> can't use it to initialize string type vector.
 * (c) vector<string> svec(10, "null"); Ok.Defines a string vector containing ten "null" strings.
 */

 /* Exercise 3.13
  * (a) vector<int> v1; no element.
  * (b) vector<int> v2(10); 10 int elements with value 0 for each.
  * (c) vector<int> v3(10,42); 10 int elements with value 42 for each.
  * (d) vector<int> v4{10}; 1 int element with a value 10.
  * (e) vector<int> v5{ 10,42 }; 2 int elements: 10 and 42.
  * (f) vector<string> v6{ 10 }; 10 string elements with empty string ("") for each.
  * (g) vector<string> v7{ 10,"hi" }; 10 string elements with string "hi" for each.
  */
int main()
{
	
	return 0;
}

