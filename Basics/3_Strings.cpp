// 3. Strings

#include <iostream>
// using namespace std;

int main()
{
	std::string text1 = "Hello ";
	std::string text2 = "World";

	std::cout << text1 + text2 << std::endl; //concatenate 2 string objects

	//note: unlike Python, + doesnt work for different object types
	// cout << text1 + 4 << endl; // will give an error

	std::cout << "Hello "
				 "world"
			  << std::endl;

	return 0;
}