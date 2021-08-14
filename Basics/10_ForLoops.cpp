/*
10. For Loops
	for(int i = 0; i < n; i++){
	}

	- break: break out from the loop (= break in python)
	- continue: skip to the next iteration (= continue in python)
*/

#include <iostream>

using namespace std;

int main() {
	
	cout << "Enter a limit > " << flush;

	int input;
	cin >> input;

	for (int i = 0; i < 10; i++) {
		cout << "i is " << i << endl;
		
		if (i >= input) {
			cout << "i is greater than limit" << endl;
			break;
		}

		if (i == 3) {
			continue;
		}

		cout << "Just checking..." << endl;

	}

	cout << "Done." << endl;

	return 0;
}