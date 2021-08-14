#include <iostream>

#include "Cat.h"

using namespace std;

void Cat::makeHappy()
{
	happy = true;
}

void Cat::makeSad()
{
	happy = false;
}

void Cat::speak() {
	if (happy == true) {
		cout << "Meowwww" << endl;
	}
	else {
		cout << "sssssss" << endl;
	}
}

