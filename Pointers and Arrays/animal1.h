#pragma once
#include <iostream>

using namespace std;

namespace cat1 {

class Cat
{
private:
	string name;
public:
	Cat(string name) { this->name = name; }
	void speak();
};

}


