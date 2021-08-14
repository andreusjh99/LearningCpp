/*1. Classes

	class className {
	public:
		void function1(); //grouping prototypes into a class
	}

	//defining functions for a class
	void className::function1() {
		...
	}

	//defining an instance 
	className variableName; (for eg: int value;)

	//call function for a class
	variableName.function1();
	
*/

#include <iostream>
#include "Cat.h"

using namespace std;

int main() {

	Cat OliviaBenson;
	OliviaBenson.jump();
	OliviaBenson.speak();

	return 0;
}