/* 9. While loops
	a. while loop
		while(...) {
		}

	b. do-while loop
		do {
		} while(...)

	*do-while loop carries out 1 iteration no matter the condition. 
	The loop is then only activated when the condition is met.

*/

#include<iostream>

using namespace std;

int main() {
	
	cout << "Option 1: while loop" << endl;
	cout << "Option 2: do-while loop" << endl;

	int input;

	do {
		cout << "Enter option > " << flush;
		cin >> input;
		
		if (input != 1 && input != 2) {
			cout << "Invalid option. Pick again." << endl;
		}

	} while (input != 1 && input != 2);


	string password = "1234";
	if (input == 1) {
		//perform while loop
		cout << "You chose 'While loop'." << endl;

		bool success = true;
		cout << "Enter password > " << flush;
		string password_input;
		cin >> password_input;

		int count = 0;
		while (password_input != password && count < 3) {
			count++;
			cout << "Access denied. You have " << 3 - count << " more trial(s)." << endl;
			success = false;

			if (count != 3) {
				success = true; //resetting success to true
				cout << "Enter password > " << flush;
				cin >> password_input;
			}
		}

		if (success == true) {
			cout << "Access granted." << endl;
		}
		
		cout << "End of code." << endl;
	}
	else if (input == 2) {
		//perform do-while loop
		cout << "You chose 'do-while loop'." << endl;

		bool success = true;

		string password_input;

		int count = 0;

		do {
			success = true;
			cout << "Enter password > " << flush;
			cin >> password_input;

			count++;

			if (password_input != password && count <= 3) {
				cout << "Access denied. You have " << 3 - count << " more trial(s)." << endl;
				success = false;
			}
			
		} while (password_input != password && count < 3);


		if (success == true) {
			cout << "Access granted." << endl;
		}

		cout << "End of code." << endl;
	}

	return 0;
}