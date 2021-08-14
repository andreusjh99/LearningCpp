/*	2. Static Keyword

A static member variable or static method is created if you want the variable/method to be accessible 
even without an instance of the class being created.

Static Variable
------------------
1. Static variable which does not change, ie, const
for eg.
	static int const VALUE = 20;

- initialise the value as you define it. Since it is const, you cant change it later, so need to define
the value right away!
- public or private? doenst matter. since its const, even if its public, you cant change it anyway.

2. Static variable which can be changed
for eg.
	static int value;

- This is just the same as usual member variables, just being static (ie can be accessed/used when
no instance of class is created). So, should make it private.
- Typically dont initialise it in the header file, initialise it in the .cpp file instead.
	in Machine.h:
		static int value;
	
	in Machine.cpp: 
		int Machine::value = 20;

Static method
----------------
	static void functionName(...){...};

- public or private doesnt matter.
*/

#include "Machine.h"

int main()
{

	Machine::NoOfMachines();				   // count: 0 => accessing a static method.
	cout << "Year: " << Machine::YEAR << endl; // Year: 2019 => accessing a static variable.

	Machine machine1;
	machine1.NoOfMachines(); // count: 1
	Machine::NoOfMachines(); // count: 1
	machine1.info();		 // ID: 1

	Machine machine2;
	machine2.NoOfMachines(); // count: 2
	Machine::NoOfMachines(); // count: 2
	machine2.info();		 // ID: 2

	return 0;
}