#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
/*Exercise 3.27:
 *(a)int ia[buf_size]; Illegal. buf_size is not defined as a const or constexpr
 *(b)int ia[4 * 7 - 14]; OK.
 *(c)int ia[txt_size()]; The return type of txt_size must be qualified constexpr otherwise can not use it as dimension value.
 *(d)char st[11] = "fundamental";Illegal. The string literal has a null character so it has 12 characters which can not be an initializer to a 11 element array.
*/

/* Exercise 3.28:
 * string sa[10]; ten empty string ("") as string is a class type.
 * int ia[10]; The array contains ten 0 if it is defined in globl scope.When it is defined as a local variable,each element is uninitialized.
 * int main(){string sa[10];int ia[10];} sa[10] has ten empty string ("") as string is a class type.ia[10] is undefined as int is a built-in type.
 */

/*Exercise 3.28:
 *The size of an array is fixed before compile time.
 */
constexpr int txt_size() {
	return 5;
}
string sa[10];
int iaa[10];
int main()
{

	const unsigned buf_size = 1024;
	int ia[buf_size];
	int ia2[4 * 7 - 14];
	int ia3[txt_size()];
	char st[12] = "fundamental";

	for (auto ia : sa) {
		cout << ia << " ";
	}
	return 0;
}