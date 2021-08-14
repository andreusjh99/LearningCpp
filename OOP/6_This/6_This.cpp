/* 6. This
'this' is the memory location of the instance of the object.
'this' provides an alternative to using variable names like newName.
so instead of
	name = newName;
use:
	this -> name = name;
*/

#include <iostream>
#include "Person.h"

int main() {
	Person person1;
	Person person2("Andreus", 20);

	cout << person1.toString() << endl;
	cout << person2.toString() << endl;
}