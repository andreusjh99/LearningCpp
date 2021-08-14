#pragma once
#include <iostream>

using namespace std;

class Person
{
private:
	string name;
public:
	Person();
	string getName(); //getter fn
	void setName(string newName); //setter fn
};

