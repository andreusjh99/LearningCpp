/* 7. Constructor Initialisation Lists
Yet another alternative for initialising values for member variables.
	Cat::Cat(string name, int age): name(name), age(age) {};

name(name):
	the first name is the member variable,
	the name in the brackets is the argument you passed in as name.
*/

#include <iostream>
#include "Person.h"

int main() {
	Person person1;
	Person person2("Andreus", 20);

	cout << person1.toString() << endl;
	cout << person2.toString() << endl;

	return 0;
}

/*
**********************************************
There are three ways to initialise the value of a member variable:
1. a setter
2. a constructor: this->name = name;
3. a constructor: initialisation list, name(name)
**********************************************
*/