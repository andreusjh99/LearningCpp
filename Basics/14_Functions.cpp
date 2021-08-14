/* 14. Functions
void functionName (int parameterName, ...) {
	...
}

** In C++, in a project, you cant't define the same function twice or use the same function name for two different function definitions.**
*/

#include <iostream>

using namespace std;

void show_menu() {
	cout << "MENU" << endl;
	cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
	cout << "1. Search" << endl;
	cout << "2. View record" << endl;
	cout << "3. Quit" << endl;
	cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
	cout << endl;

	cout << "Select an item from the menu > " << flush;
}

int make_selection() {
	int input;
	cin >> input;

	cout << endl;
	cout << "You selected " << input << "." << endl;

	return input;
}

bool process_selection(int option) {
	bool select = false;
	
	switch (option) {
	case 1:
		cout << "Searching..." << endl;
		select = true;
		break;
	case 2:
		cout << "Retrieving record..." << endl;
		select = true;
		break;
	case 3:
		cout << "Quitting..." << endl;
		select = true;
		break;
	default:
		cout << "Input not recognised. Please select an item from the menu." << endl;
	}

	return select;
}


int main() {
	
	show_menu();

	int option = make_selection();

	bool select = process_selection(option);

	if (select == true) {
		cout << "Done!" << endl;
	}

	return 0;
}

/*
**In C/C++, it is often desirable to have the main function be as simple as possible.
It will usually be made up of chunks of functions.
*/