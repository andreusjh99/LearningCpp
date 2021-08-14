/* 5. Overloading Constructors
A better way to set the value of a member variable instead of using a setter is
to do it with the constructor itself!
Initialise the value when you instantiate the class.
In fact, we already did that in tutorial 2: Constructors and Destructors.
HOWEVER, we can't initialise the member variable with the value we want. We could only do that with a setter.
We want to be able to initialise a member variable with desired value right away.

	Cat(string newName, int newAge);

	Cat::Cat(string ...) {
		name = newName;
		age = newAge;
	}

When you instantiate a class, 
	Cat cat1("Meredith", 4);

The values are passed in as arguments in the constructor.

**You can have multiple constructors as long as they differ in the types of arguments passed in.
for eg. 
Cat(string name);
Cat();

They can coexist.
The compiler chooses the right constructor based on the arguments you passed in when you instantiate the class.**
*/

#include <iostream>
#include "Person.h"

//using namespace std;

int main() {
	Person person1;
	cout << person1.getData() << endl;

	Person person2("Alex");
	cout << person2.getData() << endl;

	Person person3("Andreus", 20);
	cout << person3.getData() << endl;

	return 0;
}