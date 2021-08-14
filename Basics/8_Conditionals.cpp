/* 8. Conditionals
	a. if-else
	if (...) {
	} else if (...) {
	} else {
	} 

	b. and, or
	and: &&
	or: ||
*/

#include <iostream>

using namespace std;

int main() {

	string username = "Andreus";
	string password = "1234";
	string username_input;
	string password_input;

	bool access;
	cout << "Enter username > " << flush;
	cin >> username_input;

	cout << "Enter password > " << flush;
	cin >> password_input;

	if (username_input == username && password_input == password) {
		access = true;
		cout << "Access granted." << endl;
	}
	else {
		access = false;
		cout << "Access denied." << endl;
	}

	if (access == true) {
		cout << "1.\tAdd new record." << endl; // \t is tab
		cout << "2.\tDelete record." << endl;
		cout << "3.\tView record." << endl;
		cout << "4.\tSearch record." << endl;
		cout << "5.\tQuit." << endl;

		int input;
		cout << "Enter your selection > " << flush;
		cin >> input;

		if (input == 1) {
			cout << "Adding new record..." << endl;
			cout << "Done!" << endl;
		}
		else if (input == 2) {
			cout << "Deleting record..." << endl;
			cout << "Done!" << endl;
		}
		else if (input == 3) {
			cout << "Opening record..." << endl;
			cout << "Done!" << endl;
		}
		else if (input == 4) {
			cout << "Searching..." << endl;
			cout << "Done!" << endl;
		}
		else {
			cout << "Quitting..." << endl;
			cout << "Done!" << endl;
		}
	}

	return 0;
}

/*
A neat trick:
For conditionals we might check if two variables have the same value as a condition.
if (text1 == text2) {...}

This works fine for most object types, apart from floating point types.
This is because no two floats/doubles/long doubles are identical.
A neat trick would be to check if their difference is smaller than a very small value, say 0.0001.
*/