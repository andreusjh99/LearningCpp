/* 1. Inheritance

An important concept in OOP. You have the parent class (Animal in this case)
Then you can create another class which takes on the public methods of Animal 
plus some extra methods and member variables.
This is called inheritance.
Cat inherited the public methods from Animal and 
on top of that, it can have its own methods and member variables too.

Note: the private variables and methods are not inherited by the subclasses.
There is no way to access those private elements in the subclass unless
the subclass inherits a public method from the parent which uses the private variable or method somehow.

*/

#include <iostream>

using namespace std;

class Animal {
private:
	string name;
public:
	void speak() { cout << "Grrrr...." << endl;  };
	void sayName() { cout << name << endl; };
	void setName(string name) { this->name = name; };
};

class Cat : public Animal {
public:
	//void test() { cout << name << endl; } warning!!

	//it doesn't inherit name since it is a private variable.
	//But why do sayName works?
	//because sayName is a public method and is inherited from Animal.
	//when it is called, it goes back to the parent (Animal) and so is allowed access to 'name'.

	void jump() { cout << "jumping" << endl; };
};

class Tiger : public Cat {
public:
	void attack() { cout << "attacking!" << endl; };
};

int main() {

	Animal animal;
	animal.setName("Alex");
	animal.sayName(); //Alex
	animal.speak(); //Grrr

	Cat cat;
	cat.sayName(); //blank (which makes sense)
	cat.setName("Olivia");
	cat.sayName(); //Olivia
	cat.speak(); //Grrr
	cat.jump(); //jumping

	Tiger tiger;
	tiger.sayName(); //blank
	tiger.setName("Meredith");
	tiger.sayName(); //Meredith
	tiger.speak(); //Grrr
	tiger.jump(); //jumping
	tiger.attack(); //attacking!

	return 0;
}