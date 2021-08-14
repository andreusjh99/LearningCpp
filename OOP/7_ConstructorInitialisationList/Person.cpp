#include <iostream>
#include <sstream>
#include "Person.h"

Person::Person(): name(""), age(0) {};

Person::Person(string name, int age) : name(name), age(age) {};

string Person::toString() {
	stringstream ss;
	ss << "name: " << name << "; age: " << age;
	return ss.str();
}
