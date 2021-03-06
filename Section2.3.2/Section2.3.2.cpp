#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	//Exercise 2.18
	//change the value of the pointer p1.
	int value1, *p1 = &value1;
	int value2 = 30;
	p1 = &value2;
	//change the value to which the pointer p1 point.
	*p1 = 50;

	/*Exercise2.19
	 * 1.References are not object as they are bounded to objects when they are defined.However,pointers are objects which store the addresses of objects they point to.
	 * 2.The objects bounded by references can not be changed once these references are defined while pointers can change the objects they point to.
	*/

	/* Exercise 2.20
	 * int i = 42; define an int i and initialize it by 42.
	 * int *p1 = &i;// define an pointer to int and initialize it by the address of variable i;
	 * p1 = *p1 * *p1; 
	 * The operation evalutate the right-hand of "=" at first.Dereference p1 for twice and do the multiplication base on their value.
	 * Then assign the result to the left-hand side by dereference p1.The value of p1 point to(i) changed.
	 */

	/* Exercise 2.21
	int i = 0;
	double *dp = &i;//Illegal.Can't assign the address of an int to a pointer to double.
	int *ip = i;//Illegal. Can't assign an int to a pointer.
	int *p = &i;//ok.
	*/

	/* Exercise 2.22
	 * if(p): This condition will be evaluated as true if the pointer p point to a valid object otherwise will return false if p point to nullptr. 
	 * if(*p) This condition will return true if the value pointed by p is non-zero.It will return false if *p = 0;
	 */

	/*Exercise 2.23
	 * We can't determine a pointer whether it points to a valid object just by itself. 
	 * Since the pointer just stores the address value and we don't know the details about the object resided in this address.
	 */

	/*Exercise 2.24
	 * a void* pointer can point to any tpye of object while a pointer to long can't point to an int. 
	 */
    return 0;
}

