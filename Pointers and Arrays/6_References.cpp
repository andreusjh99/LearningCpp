/* 6. References
variableType &reference = value;
eg.
	int &reference = value;
	or 
	int& reference = value;

Like pointer, reference is a variable, but a special kind of variable.

In python, say you define a = 1
b = a creates a new variable b and copies the value of a for b.
So changing b won't affect a.
In fact, there is no way for you to define a new variable b which you could change to affect a.
(apart from lists in python)

In C++ it's the same concept.
int a = 1; int b = a;
This copies the value for a and assign it to b.
Changing b won't affect a.
HOWEVER, in C++ there is a way to define a new variable b which when changed will affect the original variable a.
=> Reference.

int a = 1; int &b = a;
This enables to compiler to understand that b refers to the thing kept in the memory address a 'resides' in.
Doing things to b now affects a.

The motivation behind this:
Changing a value with functions. (see below)

**********************Pointer vs Reference**************************
Pointers: A pointer is a variable that holds memory address of another variable. 
A pointer needs to be dereferenced with * operator to access the memory location it points to.
	int *p = &a;

References : A reference variable is an alias, that is, another name for an already existing variable. 
A reference, like a pointer, is also implemented by storing the address of an object.
A reference can be thought of as a constant pointer (not to be confused with a pointer to a constant value!) 
with automatic indirection, i.e the compiler will apply the * operator for you.
	int &b = a;		or
	int &b = *p;

SO both pointer and reference are stored as variables which the memory address of the variable a.
The difference is that for reference, the compiler apply the * operator automatically.

*/

#include <iostream>

using namespace std;

void manipulate_p(double* pointer, double replacement) {
	//using pointer
	*pointer = replacement;
}

void manipulate_r(double& reference, double replacement) {
	//using reference
	reference = replacement;
}

int main() {
	int value1 = 5;
	int value2 = value1;
	value2++;

	cout << "value1: " << value1 << endl; //5
	cout << "value2: " << value2 << endl; //6

	cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
	cout << endl;

	int value3 = 5;
	int& value4 = value3;
	value4++;

	cout << "value3: " << value3 << endl; //6
	cout << "value4: " << value4 << endl; //6



	cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
	cout << endl;

	cout << "Replacement using pointers" << endl;
	double value5 = 123.4;
	double replacement = 432.1;

	cout << "original value: " << value5 << endl; //123.4

	manipulate_p(&value5, replacement);
	cout << "replaced value: " << value5 << endl; //432.1

	cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
	cout << endl;

	cout << "Replacement using reference" << endl;
	double value6 = 123.4;

	cout << "original value: " << value6 << endl; //123.4

	manipulate_r(value6, replacement);
	cout << "replaced value: " << value6 << endl; //432.1

	return 0;
}