/* 3. Constructors and destructors
	Constructors and destructors must have the same name as the class name.
	Eg:
		class: Cat
		constructor: Cat();
		destructor: ~Cat();

	Constructor is called when a class is instantiated and the destructor is called when a class is destroyed.
	*When is a class instantiated? when it is defined. eg: Cat Olivia;
	*When is a class destroyed? When the ocde runs until the close curly bracket 
		which defines the end of the scope of which the class is defined.

	Constructors are useful to initialise member variables of a class. 
	Instead of initialising them like this: bool happy = true;,
	initialise them in the constructor.
*/

#include <iostream>
#include "Cat.h"

using namespace std;

int main() {
	cout << "Starting program..." << endl;

	Cat Olivia; // this is when the class is instantiated. The constructor is called here.
	Olivia.speak(); // expect Meowwww since happy is initialised as true.

	Olivia.makeSad();
	Olivia.speak(); // expect sssss since happy is now changed to false.

	cout << "Ending program..." << endl; //just to show where the destructor is called.

	return 0;
}//Close curly bracket for the scope of which the class is defined. The destructor is called here.