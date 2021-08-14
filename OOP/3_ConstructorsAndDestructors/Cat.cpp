#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat()
{
	happy = true; //initialising happy as true.
	cout << "Cat created. Constructor called." << endl;
}

Cat::~Cat()
{
	cout << "Cat destroyed. Destructor called." << endl;
}

void Cat::makeHappy() {
	happy = true;
}

void Cat::makeSad() {
	happy = false;
}

void Cat::speak() {
	if (happy == true) {
		cout << "Meowwww" << endl;
	}
	else {
		cout << "ssssss" << endl;
	}
}
