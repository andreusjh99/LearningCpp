/* 9. "new and delete"

**Note: This tutorial is only for using new and delete with classes.
For other types (especially arrays), refer to tutorial 11: Allocating Memory

Creating an instance:
	1. Animal animal;
	2. Animal *pointer = new Animal;

For no. 1, C++ allocates memory automatically. This uses stack memory.
For no. 2, "new" essentially allocates a memory for the instance created (hence a pointer). This uses heap memory.
The memory can only be destroyed with "delete".
So every "new" has to come with a "delete".
	delete pointer;

To use the pointer, use it like you use "this". (remember "this" is also a pointer).
	1. animal.speak();
	2. pointer->speak

*You might notice: there will be no variable name for the Animal object we created using method 2. 
There is only the name for the pointer for that object. ('pointer' in this case)

*Because you decide when to destroy the memory, the variable is not bounded by a local scope.

! Note that sequential memory allocation may not result in sequential memory address being allocated.
	int *ptr1 new int;
	int *ptr2 new int;
ptr1 and ptr2 may not have sequential addresses.

*/

#include <iostream>

using namespace std;

class Animal
{
private:
	string name;

public:
	Animal() { cout << "Animal class called." << endl; };										//normal constructor
	Animal(const Animal &other) : name(other.name) { cout << "Animal class copied." << endl; }; //copy constructor
	~Animal() { cout << "Animal class destroyed." << endl; };									//destructor

	void setName(string name) { this->name = name; };
	void speak() { cout << "My name is " << name << endl; };
};

int main()
{

	cout << "<<<<<<<< animal1 >>>>>>>>" << endl;
	Animal animal1; // contructor for animal1 called.
	animal1.setName("Freddy");
	animal1.speak();

	cout << "<<<<<<<< animal2 >>>>>>>>" << endl;
	Animal *panimal2 = new Animal; //constructor for animal2 called.
	panimal2->setName("Bob");
	panimal2->speak();

	delete panimal2; //destructor for animal2 called.

	return 0;
} //destructor for animal1 called.

/*
************************************************
There are two kinds of memory in C++: stack memory and heap memory.

Stack memory is used for local variables and also for passing data into and out of functions. 
When we do:
	Animal animal;
this uses memory from the stack. 
The memory it uses is automatically allocated by the compiler and automatically freed 
when the variable goes out of scope at the end of the current block or function call.

Heap memory is used for variables that need to live longer than the current scope.
	Animal *pointer = new Animal;
This uses memory from the heap. 
The programmer has to allocate the memory and remember to release it when it is no longer needed.
If this is not done the memory will be "leaked"; 
if this happens too often, the program could run out of memory and crash.

Some other differences:
- Allocating stack memory is much faster than allocating memory from the heap.
- The total amount of stack memory is limited (usually 4MB)
	while the heap can potentially use all the memory on the computer.
- When using stack memory, the amount of memory needed has to be known at compile time, or at least calculable. 
	With heap memory, the amount of memory to be allocated only has to be known at runtime 
	(this is sometimes known as "dynamic allocation").

In summary, stack allocation is normally used for data that is only needed temporarily. 
Heap allocation is used for data that needs to stick around for a while, 
or for data whose size cannot be known at compile time.

(More on stack and heap on Memory/*_stack_and_heap)
************************************************

************************************************
 If I decide to do it with the pointer, 
 most everything else you can do with an object should work the same, 
 except that I have to use the -> anywhere I would have used the dot operator 
 and that I must remember to delete the object.
*/