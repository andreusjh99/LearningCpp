/* 10. Returning Objects from Functions
**Note: objects, so this applies to int, string, class we define etc. 
(array will be considered in another tutorial - tutorial 12)

Ways:
1. expected way (using stack memory)

	Animal createAnimal(string name) {
		Animal a;
		a.setName(name);
		return a;
	}

Problem: the instance a is local and destroyed by the end of createAnimal(). 
	So it is copied to be returned as Animal. 
	In the main() fn when createAnimal() is called, it is copied again to become 'cat'.
	If the object is huge, this uses a lot of memory.

2. using stack memory with pointer/reference
	a. Using a reference

		Animal& createAnimal(string name) {
			Animal a;
			a.setName(name);
			return a;
		}

	This way there is no copying.
	Problem: the instance a is destroyed like before.
		But Animal& is referencing a, ie an object which no longer exists!
		This will cause huge problems. (crash etc.)
	
	b. Using a pointer

		Animal* createAnimal(string name) {
			Animal animal;
			Animal *panimal = &animal;
			panimal->setName(name);
			return panimal;
		}
	
	Problem: animal is destroyed after the scope of the function!!
		Yes the pointer tells you the memory address but what was in it is not there anymore!

3. using heap memory (ie new and delete)

	a. using a pointer 

		Animal* createAnimal(string name) {
			Animal* panimal = new Animal;
			panimal->setName(name);
			return panimal;
		}

	This way the pointer is copied twice instead of the object.
	The pointer takes up 8 bytes no matter the size of the object. So it is more desirable.
	Plus, "new" is used. So heap memory is used instead of stack memory. (more on this later)

	b. using a reference

		Animal& createAnimal(string name) {
			Animal *panimal = new Animal;
			panimal->setName(name);
			Animal &animal = *panimal;
			return animal;
		}


*/

#include <iostream>

using namespace std;

class Animal {
private:
	string name;
public:
	Animal() { cout << "Constructor is called" << endl; };
	Animal(const Animal& other) : name(other.name) { cout << "Copy constructor is called" << endl; };
	~Animal() { cout << "Destructor is called" << endl; };

	void setName(string name) { this->name = name; };
	void speak() { cout << "My name is " << name << endl; };
};

/*1. expected way

Animal createAnimal(string name) {
	Animal a;
	a.setName(name);
	return a;
}
*/

/*2. using stack memory

Animal& createAnimal(string name) {
	Animal a;
	a.setName(name);
	return a;
}
*/

/*3. using heap memory, pointer
*/
Animal* createAnimal(string name) {
	Animal* panimal = new Animal;
	panimal->setName(name);
	return panimal;
}


int main() {
	// 1. Animal cat = createAnimal("Meredith");
	// 2. Animal& cat = createAnimal("Meredith");
	// 3.
	Animal* pcat = createAnimal("Meredith");

	// 1. and 2. cat.speak();
	// 3.
	pcat->speak();

	delete pcat; // remember to delete! (pair with new)

	return 0;
}