/* 2. Data Members
	class className {
	private:
		int VariableName;
		...
	public:
		void function1();
		...
	}

	**Keep member variables private. (these are like attributes for python classes)
	**Keep member functions public. (These are like methods for python classes)
*/

#include <iostream>
#include "Cat.h"

using namespace std;

int main() {
	Cat Olivia;
	Olivia.makeHappy();
	Olivia.speak();

	Cat Meredith;
	Meredith.makeSad();
	Meredith.speak();
}

/*
******************************************
Most of the time your member variables (the variables belonging to an object) will be private.
This means they can only be altered by the object itself
and one way of doing this is using a member function like makeHappy() to set the member variable.
Normally you don't want to give direct access to variables inside a class
and only keep them to the scope of the class itself.
That's what private does.
In general always keep member variables private and member functions public.
******************************************
*/

/*
Tips for visual studio classes:
After writing a prototype for a function in the header file, 
you could hit alt+enter to define the function in the source code file.
*/