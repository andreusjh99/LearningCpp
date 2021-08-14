/* 7. const
const keeps something constant.
See applications below.
*/

#include <iostream>

// using namespace std;

void hello(const int a)
{
	std::cout << a << std::endl;
}

int main()
{
	//Understanding const
	//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
	//1. putting it before or after the type of the variable
	const int value0 = 10;
	//value1++; // will give a compilation error
	int const value1 = 11;

	// 'const int value1' and 'int const value1' are the same
	// It is preferrable to put const before the type (i.e. const int value1 for eg.)
	// 		as it better follows English convention.

	// A constant variable needs to be initialised.
	// const int value1; // will give a compilation error

	std::cout << std::endl;

	//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
	//2. using it with a function.

	// Normal functions/non-member functions

	// see the hello function above.
	/* The hello function takes in a constant parameter a.
		Note that it is not initialised. 
		The value passed in when calling the function is used to initialise
	*/

	/*
		void hello(int a) const
		{
			...
		}
		// does not work. const can only be used in this way with member functions.
	*/

	/*
	// Member functions in classes
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

	*/

	//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
	//3. using const with pointers
	int value2 = 20;
	const int *pointer2 = &value2;

	std::cout << "address of 20: " << pointer2 << std::endl; //blah

	value2++; //NO ERROR!!

	std::cout << "value2 now becomes: " << value2 << std::endl; //21

	std::cout << "what's the pointer dereferencing to: " << *pointer2 << std::endl; //21 !! (not 20)

	std::cout << "address of 21: " << &value2 << std::endl; //the same blah

	//*pointer2++; //will give a compilation error.

	//const int* pointer = &value;
	//You CAN still change 'value' LIKE USUAL,
	//but you can't change a value by dereferencing.

	std::cout << std::endl;

	int value3 = 30;
	int *const pointer3 = &value3;

	int value4 = 13;
	//pointer3 = &value4; //will give a compilation error

	std::cout << std::endl;

	return 0;
}