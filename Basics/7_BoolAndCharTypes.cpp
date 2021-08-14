// 7. Bool and Char types
// bool: true, false. Output: 1 and 0
// char: ASCII table position, takes up 1 byte. 

#include <iostream>

using namespace std;

int main() {
	bool bvalue1 = true;
	cout << "true: " << bvalue1 << endl;
	bool bvalue2 = false;
	cout << "false: " << bvalue2 << endl;

	char cvalue = 55;
	cout << "char 55 gives: " << cvalue << endl; //outputs 7
	char cvalue2 = '7'; //'7' is equivalent to 55. 
	// '7' here represents the character '7' in the ASCII table. 
	// 55 represents character no 55 in the table, which is '7'.
	cout << "7 is at position " << (int)cvalue2 << " in the ASCII table" << endl; //outputs 55
	// (int)blah casts blah to an int.

	//**since char uses single quotes, strings are only allowed to use double quotes.

	return 0;
}