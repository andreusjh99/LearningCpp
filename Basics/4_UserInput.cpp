// 4. User Input
// cout vs cin
// << (insertion operator) vs >> (extraction operator)

#include <iostream>
using namespace std;

int main() {
	cout << "Enter your name: " << flush;
	string text_input; //define empty string
	cin >> text_input; //take in the input from the user
	cout << "You entered " + text_input << endl;

	cout << "Enter your age: " << flush;
	int int_input; //define empty integer
	cin >> int_input;
	cout << "You entered " << int_input << endl;

	return 0;
}