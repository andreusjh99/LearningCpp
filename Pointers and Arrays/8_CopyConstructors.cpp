/* 8. Copy constructors
When a class is instantiated, the normal constructor is called.
When another instance of the class is instantiated, the normal constructor is called again, as expected.
However, when a new instance is instantiated by copying another existing instance, ie
	Animal animal1;
	Animal animal2 = animal1; //copy
the normal constructor is not called.
Instead, C++ implicitly defined a new constructor known as the copy constructor
and the copy constructor is called instead.

We can define our own copy constructor:
	Animal() {...}; //normal constructor
	Animal(string name) {this->name = name; ... }; //overloading constructor
	Animal( const Animal &other ){ this->name = other.name; ... } //copy constructor we define ourselves.
	or 
	Animal( const Animal &other ): name(other.name) {...}; //copy constructor we define ourselves.

- const Animal &other:
	const: so nothing in the original instance is being changed when the copy is created.
	Animal&: reference
	other: the variable name (duh)

To copy,
	Animal animal2 = animal1;
	or
	Animal animal2(animal1);
*/

#include <iostream>

using namespace std;

class Animal1 {
private:
	string name;
public:
	Animal1() { cout << "Animal1 class created." << endl; };
	void setName(string name) { this->name = name; };
	void speak() { cout << "My name is: " << name << endl; };
};

class Animal2 {
private:
	string name;
public:
	Animal2() { cout << "Animal2 class created." << endl; }; //normal constructor
	Animal2(const Animal2& other): name(other.name) { cout << "Animal2 class copied." << endl; }; //copy constructor
	void setName(string name) { this->name = name; };
	void speak() { cout << "My name is: " << name << endl; };
};

int main() {
	
	cout << "<<<<<<<<<< animal1 >>>>>>>>>>" << endl;
	Animal1 animal1; //constructor is called.
	animal1.setName("Freddy");
	animal1.speak(); //My name is: Freddy

	cout << "<<<<<<<<<< animal2 >>>>>>>>>>" << endl;
	Animal1 animal2 = animal1; //constructor is not called!
	animal2.speak(); //My name is: Freddy
	animal2.setName("Bob");
	animal2.speak(); //My name is: Bob

	cout << endl;

	cout << "<<<<<<<<<< animal3 >>>>>>>>>>" << endl;
	Animal2 animal3; //normal constructor is called.
	animal3.setName("Freddy");
	animal3.speak(); //My name is: Freddy

	cout << "<<<<<<<<<< animal4 >>>>>>>>>>" << endl;
	Animal2 animal4 = animal3; //copy constructor is called.
	animal4.speak(); //My name is: Freddy
	animal4.setName("Bob");
	animal4.speak(); //My name is: Bob

	cout << "<<<<<<<<<< animal5 >>>>>>>>>>" << endl;
	Animal2 animal5(animal4); //copy constructor is called. //another way of copying.
	animal4.speak(); //My name is: Bob
	animal4.setName("Alex");
	animal4.speak(); //My name is: Alex
	
	return 0;
}