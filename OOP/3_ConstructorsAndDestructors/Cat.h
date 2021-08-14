#pragma once
class Cat
{
private:
	bool happy;

public:
	Cat(); //Constructor
	~Cat(); //Destructor
	//Constructor and destructor must have same names as the class.

	void makeHappy();
	void makeSad();
	void speak();
};

