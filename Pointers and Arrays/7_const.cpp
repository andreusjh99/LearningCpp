/* 7. const
const keeps something constant.
See applications below.
*/

#include <iostream>

using namespace std;

int main() {
	//Understanding const
	//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
	//1. putting it in front of a variable
	const int value1 = 10;
	//value1++; //will give a compilation error

	cout << endl;

	//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
	//2. using it with a function.
	/*
	const can only be used with member functions. 
	You use it when your member functions don't make any changes to the class.
	for eg.
		a getter doesn't change anything about the class.
		a setter changes the member variable of a class.
	So a const should generally be used for functions like getters to prevent the member
	variables of the class being changed.

	for eg.
	void print(string name) const{
		cout << name << endl;
	}

	It would not be meaningful to be able to declare a non-member function const. 
	If you want to make sure you cannot change any data by accident, 
	just make all the function arguments const (or reference to const).
	*/

	//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
	//3. using const with pointers
	int value2 = 20;
	const int* pointer2 = &value2;

	cout << "address of 20: " << pointer2 << endl; //blah

	value2++; //NO ERROR!!

	cout << "value2 now becomes: " << value2 << endl; //21

	cout << "what's the pointer dereferencing to: " << *pointer2 << endl; //21 !! (not 20)

	cout << "address of 21: " << &value2 << endl; //the same blah

	//*pointer2++; //will give a compilation error.

	//** const int* pointer = &value; 
	//You CAN still change 'value' LIKE USUAL, 
	//but you can't change a value by dereferencing.

	cout << endl;

	int value3 = 30;
	int* const pointer3 = &value3;
	
	int value4 = 13;
	//pointer3 = &value4; //will give a compilation error

	cout << endl;

	return 0;
}