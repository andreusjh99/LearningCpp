/* 3. Pointers and Arrays
- Pointers and arrays are similar. 
- Difference: array knows how many addresses they are pointing to; pointers dont

	int array[] = {1, 2, 3};
	int* pointer = array;

	pointer now refers to address of the FIRST element.

- Think of array[0] as accessing the value stored in the address of the first element
i.e. array == &array[0]
=> int* pointer = array; == int* pointer = &array[0];

- Since pointer refers to the address of the 1st element 
and elements in an array are stored in adjacent addresses,
pointer++ will give the address of the 2nd element and so on.

**Essentially, there are two ways of accessing the values in an array:
1. 'Old-fashioned Python' way:
	array[0]; array[1]; array[2] ...

2. Using a pointer
	Store the array as a pointer and the pointer points to the first element.
	Increase the pointer to show the other elements

*/

#include <iostream>

using namespace std;

int main() {
	string array[] = { "Hi", "Hello", "hola" };
	string* pointer1 = array;
	string* pointer2 = &array[0];

	cout << "Pointer1: " << pointer1 << endl;
	cout << "Pointer2: " << pointer2 << endl;
	cout << "Pointer1 == pointer2?: " << (pointer1 == pointer2) << endl; //true

	string* pointer = array;

	for (int i = 0; i < sizeof(array) / sizeof(string); i++) {
		cout << *pointer << " " << flush;
		pointer++;
	}

	return 0;
}