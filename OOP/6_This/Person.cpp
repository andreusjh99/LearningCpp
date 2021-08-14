#include <iostream>
#include <sstream>
#include "Person.h"

Person::Person() {
	name = "";
	age = 0;
}

Person::Person(string name, int age) {
	this->name = name;
	this->age = age;

	cout << "Memory location of this object: " << this << endl; 
	//just to show what 'this' refers to
}

string Person::toString()
{
	stringstream ss;
	ss << "name: " << name << "; age: " << age;
	return ss.str();
}
