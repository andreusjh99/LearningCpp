#pragma once
#include <iostream>

using namespace std;

class Person
{
private:
	string name;
	int age;
public:
	Person(); //constructor
	Person(string name, int age); //overloading constructor

	string toString(); //getter
};

