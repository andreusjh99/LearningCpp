/* 4. Char Arrays
An array to store chars

You can also convert a string into a char array (as below).
However, the length of the char array will be one longer than the length of the string.
The last element is blank to indicate that the array ends.

Trick: puts()
	int puts( const char * str ); 
This writes string to stdout
It also appends a newline character at the end automatically.

*/

#include <iostream>

using namespace std;

int main()
{
	char array1[] = {'h', 'e', 'l', 'l', 'o'};

	cout << "length of array1: " << sizeof(array1) << endl; //5

	cout << "array1: " << array1 << endl;
	puts(array1);

	for (int i = 0; i < sizeof(array1); i++)
	{
		cout << i << ": " << array1[i] << endl;
	}

	cout << "<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
	cout << endl;

	char array2[] = "hello";

	cout << "length of array2: " << sizeof(array2) << endl; //6

	cout << "array2: " << array2 << endl;
	puts(array2);

	for (int i = 0; i < sizeof(array2); i++)
	{
		cout << i << ": " << array2[i] << endl;
	}
}