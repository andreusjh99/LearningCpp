/* 3. Constructor Inheritance
Let Machine be the parent class with private member variable id, 
and Vehicle be an inherited class from Machine.

In 1. Inheritance, we considered only normal constructors.
ie. Machine() {...blah...}

How do you then create parameterised constructors for inherited classes?
ie. Vehicle(int id) {...blah...}

We would expect
	Vehicle(int id): id(id) {...blah...}
BUT remember, id is a private member variable of Machine, so it is not inherited by Vehicle.

To allow the constructor of vehicle to access id, it needs to use the constructor from Machine
ie.
	Machine(int id): id(id){...blah...} //parameterised constructor of Machine
	...
	Vehicle(int id): Machine(id) {...blah...} //parameterised constructor of Vehicle

What happens is that when you create an instance of Vehicle, both the parameterised constructors of
Machine and Vehicle are called.

*******
Third generation inheritance
Let Car be child class of Vehicle

	Car(int id): Vehicle(id) {...blah...}

When an instance of Car is created, all three parameterised constructors are called.

!!! Car(int id): Machine(id) {...blah...} is not allowed!
ie. You can't call the constructor of an indirect superclass.

*/

#include <iostream>
using namespace std;

class Machine {
private:
	int id;
public:
	Machine() { id = 0; cout << "Machine Constructor called" << endl; } // normal constructor
	Machine(int id) : id(id) { cout << "Machine Parameterised constructor called" << endl; } //parameterised constructor

	void info() { cout << "ID: " << id << endl; };

};

class Vehicle : public Machine {
public:
	Vehicle() { cout << "Vehicle Constructor called" << endl; }; //normal constructor
	//Vehicle(int id): id(id) { cout << "Machine Parameterised constructor called" << endl; } Warning!!
	Vehicle(int id) : Machine(id) { cout << "Vehicle Paraeterised constructor called" << endl; } //parameterised constructor
	
};

class Car : public Vehicle {
public:
	Car() { cout << "Car Constructor called" << endl; }; //normal constructor
	//Car(int id): id(id) { cout << "Car Parameterised constructor called" << endl; } Warning!!
	Car(int id) : Vehicle(id) { cout << "Car Paraeterised constructor called" << endl; } //parameterised constructor

	/*
	NOTE: Car(int id) : Machine(id) { cout << "Car Paraeterised constructor called" << endl; }
	also gives a warning. 
	You can't call the constructor from indirect superclass.
	*/

};



int main() {
	Vehicle vehicle1;
	vehicle1.info(); //ID: 0, the two normal constructors are called.

	Vehicle vehicle2(123);
	vehicle2.info(); //ID: 123, the two parameterised constructors are called.

	Car car1;
	car1.info(); //ID: 0, the three normal constructors are called.

	Car car2(345);
	car2.info(); //ID: 345, the three parameterised constructors are called.

	/*Note: one thing we took for granted.
	why does info() work? 
	info() is a public method of Machine and is inherited by Vehicle and Car.
	When car.info() is called, 
	it goes back to Machine and does whatever.
	There is 'id' in info() but it does not matter
	because it is a private variable of Machine and info() has access to it, so to speak.
	*/




}