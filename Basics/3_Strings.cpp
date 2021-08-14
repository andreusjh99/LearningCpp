// 3. Strings

#include <iostream>
using namespace std;

int main() {
	string text1 = "Hello ";
	string text2 = "World";

	cout << text1 + text2 << endl; //concatenate 2 string objects

	//note: + doesnt work for different object types (string + int for eg)
	
	return 0;
}