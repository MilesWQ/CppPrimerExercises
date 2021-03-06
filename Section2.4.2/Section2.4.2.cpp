// Section2.4.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

/*Exercise 2.27
 * int i = -1, &r = 0;				illegal. We can't assign a value to a reference directly.
 * int *const p2 = &i2;				ok
 * const int i = -1, &r = 0;		ok.Reference to const can be initialized by any expression that can be converted to the type of reference.
 * const int *const p3 = &i2;		ok. A const pointer to an const int.
 * const int *p1 = &i2;				ok. low level const.
 * const int &const r2				Illegal.A reference to const must be initilized when it's being defined. 
 * const int i2 = i,&r = i; ok.		An consot integer and a reference to const can be initialized by a const type or non-const type.
*/

/* Exercise 2.28
 * int i, *const cp;		Illegal. The const pointer "cp" needs an initializer.
 * int *p1, *const p2;		Illegal. The const pointer "p2" needs an initializer.
 * const int ic, &r = ic;	Illegal. The const variable ic requires an initializer.
 * const int *const p3;		Illegal. The const pointer requires an initializer.
 * const int *p;			Ok.Define a pointer to const int.
 */

int main()
{
	//Exercise2.29
	//(a) Ok if const ic has been initialized.
	int i;
	const int ic = 0;
	i = ic;

	//(b) Illegal. A poninter to const int can not be assigned to a pointer to int.
	//int *p1;
	//const int *const p3 = 0;
	//illegal
	//p1 = p3

	//(c) Illegal. A plain poninter can not be assigned to a const object.
	//const int ic = 0;
	//illegal
	//p1 = &ic;

	//(d) Ok.
	const int *const p3 = &ic;

	//(e) Illegal if p1 is uninitilized
	//int *const p2 = p1;

	/*(f)
	 * ic = *p3 Illegal since ic is a const int it can not be changed the value after initialization.
	 */
    return 0;
}

