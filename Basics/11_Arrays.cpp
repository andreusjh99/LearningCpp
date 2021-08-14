/* 11. Arrays
	- initialise an array: 
	int values[n] = {...};

	**BEWARE: if an array has length n, accessing the n+1^th element of the array will not cause an error in c++**

	- length of array
	Sorry, no built-in len() method.
	To get the length, use sizeof() and perform some math.
	See below for example.
*/

#include <iostream>

using namespace std;

int main() {
	//Initialising an array of integers
	cout << "Array of integers" << endl;

	int values1[3];
	
	values1[0] = 23; 
	values1[1] = 33;
	//the first and 2nd element are defined whereas the third element is not.
	//In this case, when c++ will output 0 for the third element.

	cout << "Values1: " << values1 << endl; //This DOESNT output the entire array, but a 32-bit number in hexadecimal, which is the address of the first element of the array.

	for (int i = 0; i < 3; i++) {
		cout << "Element " << i << " is: " << values1[i] << endl;
	}

	cout << endl; //just to create an empty line

	//instead of defining each element separately with multiple lines, you can initialise them at the beginning.
	int values2[3] = { 23, 33, 43 }; // this is the same as 'int values2[] = { 23, 33, 43 };'

	for (int i = 0; i < 3; i++) {
		cout << "Element " << i << " is: " << values2[i] << endl;
	}

	cout << endl;

	//Initialising an array of zeros
	cout << "Array of zero values" << endl;

	int values0[4] = {};

	for (int i = 0; i < 4; i++) {
		cout << "Element " << i << " is: " << values0[i] << endl;
	}

	cout << endl;

	//Initialising an array of something else
	cout << "Array of strings" << endl;

	string text[3] = { "Hello", "Bye", "Ooi" };

	for (int i = 0; i < 3; i++) {
		cout << "Element " << i << " is: " << text[i] << endl;
	}

	cout << endl;

	//Length of arrays
	cout << "Length of arrays" << endl;

	int values3[5] = { 1, 2, 3, 4, 5 };

	int length0 = sizeof(values3) / sizeof(int);
	cout << "length of values3 is: " << length0 << endl;

	string texts[4] = { "a", "b", "c", "d" };

	int length1 = sizeof(texts) / sizeof(string);
	cout << "length of texts is: " << length1 << endl;
	//tip: sizeof (string) = 8

	return 0;
}