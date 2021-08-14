/* 1. Pointers
	-To get address of a variable, 
		&variable.

		The ampersand retrieves the address where the variable is stored.
		eg:
			int value;
			&value => address

	-To store this address as a pointer,
		variableType* pointer = &variable;

		* represents pointer. variableType* means pointer to variableType.
		eg:
			int value;
			int* pointer = &value;
	
	-To access the value stored in an address,
		*pointer

		This is called dereferencing.
		eg:
			int value;
			int* pointer = &value;
			int retrievedValue = *pointer;

		So this is called dereferencing.(for reasons we will learn later in 6. References)
	
	**Why do we need all this?**
	In python, we don't think in terms of memory addresses.
	So to change what 'value' takes/points to, we redefine 'value'
	for eg.
		value = 2
		value = 3 #now value points to the integer 3

	In C++, we are not allowed to redefine 'value', ie. int value = 2; int value = 3; gives an error.
	The only way to do it will be to go into the memory address and change what was in there.
	To do this you will need this pointer since pointer is the memory address!
	Therefore, 
		-To actually change the value in an address, you need the address. (&value)
		Then you need to access the value in the address and change it. (*pointer = replacement;)

*/

#include <iostream>

using namespace std;

//to show that you need to manipulate the value stored in the address to actually manipulate it.
void manipulate1(int value, int replacement) {
	value = replacement;
	cout << "Try replacing..." << endl;
}

void manipulate2(int* pointer, int replacement) {
	*pointer = replacement;
	cout << "Try replacing..." << endl;
}

int main() {
	double value = 123.4;
	double* pointer = &value;
	double retrieved = *pointer;

	cout << "This is the value: " << value << endl; // 123.4
	cout << "This is the address of the value: " << pointer << endl; // address
	cout << "This is the value in the address: " << retrieved << endl; // 123.4

	cout << endl;
	cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
	cout << endl;

	int value1 = 18;

	cout << "value1 before replaced: " << value1 << endl; // 18
	manipulate1(value1, 2345); // feed in the value. The value is actually copied to refer to the argument of the function.
	cout << "value1 after replaced: " << value1 << endl; // 18
	cout << "*****************" << endl;

	cout << "value1 before replaced: " << value1 << endl; // 18
	manipulate2(&value1, 2345); // feed in the address. The value in the address is used.
	cout << "value1 after replaced: " << value1 << endl; // 2345

	/*
	NOTE: a variable is not allowed to be defined more than once. (unlike python)

	cout << "................." << endl;
	int number = 0;
	cout << number << endl;

	int number = 1; //ERROR
	cout << number << endl;
	*/

	return 0;
}

/*
*******************************************************
**Information about pointers and dereferencing:**

Programs are all about data. This data is stored in the computer's memory.

The best way to think of this as a C++ programmer is 
to imagine the computer's memory as a vast sequence of boxes, each capable of storing one byte of data. 
Each of these boxes is identified by a unique number, 
in the way that a house on a street is identified by its number 
(not always the case in the real world, but we'll ignore that).

This number is called the address of the data and it tells us where the data is kept. 
This is equivalent to being able to locate someone's house in a street. 
Of course, to do anything useful, we need some way of accessing what's inside. 
For a human visiting a house, we would knock on the door, or press a button to gain entry; 
as C++ programmers, we "dereference" the address. 
This causes the electronic circuitry in the memory chip to return or update the data stored at that address.

Usually the compiler manages this for us: 
when we create a variable, the compiler will arrange for some memory to be allocated to hold the variable's data
and it associates the name of the variable with the address of the data. 
(It also associates a type with the variable, to check we are using it correctly).
A common case for using pointers in C++ is when we need to manage the memory manually, 
because we do not know at compile time how much memory we will need, 
so it is not possible for the compiler to manage it for us.

So, in summary, 
the address of a variable tells us where the box is, 
the dereference operator lets us see what's inside the box.

*******************************************************
*/