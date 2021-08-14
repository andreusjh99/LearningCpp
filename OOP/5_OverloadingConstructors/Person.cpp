#include <iostream>
#include <sstream>
#include "Person.h"

//using namespace std;

Person::Person() {
	name = "Undefined";
	age = 0;
}

Person::Person(string newName) {
	name = newName;
	age = 0;
}

Person::Person(string newName, int newAge) {
	name = newName;
	age = newAge;
}

string Person::getData() {
	stringstream ss;
	ss << "name: " << name << "; age: " << age;

	return ss.str();
}