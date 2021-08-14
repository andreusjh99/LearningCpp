#pragma once

#include <iostream>

using namespace std;

namespace cat2 {

class Cat
{
private:
	string name;
public:
	Cat(string name) { this->name = name; }
	void speak();
};

}



