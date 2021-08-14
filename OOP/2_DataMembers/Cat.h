#pragma once
class Cat
{
private:
	bool happy; //these are member variables
public:
	void makeHappy(); // a member function to alter the member variable happy.
	void makeSad();
	void speak();
};


/*
Most of the time your member variables (the variables belonging to an object) will be private. 
This means they can only be altered by the object itself 
and one way of doing this is using a member function like makeHappy() to set the member variable. 
Normally you don't want to give direct access to variables inside a class 
and only keep them to the scope of the class itself. 
That's what private does. 
In general always keep member variables private and member functions public.
*/
