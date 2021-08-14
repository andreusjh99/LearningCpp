/* 13. Switch
- An elegant way to code if else statements. Quite uncommon though

	switch (value) {
	case 2:
		...
		break;
	case 3:
		...
		break;
	...
	default:
		...
	}

In the example above, the cases are such that when value == 2, 3, etc.
Note the break's!!!
*/

#include <iostream>

using namespace std;

int main() {
	
	cout << "Lottery. Pick a number from 1 to 5. You have 2 chances." << endl;
	cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
	
	int input;

	int count = 0;
	do {
		cout << "Enter number here > " << flush;
		cin >> input;

		cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
		cout << "You picked " << input << " ?! Wait..." << endl;
		cout << endl;

		count++;

		switch (input) {
		case 1:
			cout << "You are a prick." << endl;
			break;

		case 2:
			cout << "You are a twat." << endl;
			break;

		case 3:
			cout << "CONGRATS! You win a prize!" << endl;
			break;

		case 4:
			cout << "You are an idiot." << endl;
			break;

		case 5:
			cout << "Ha. Sorry. Unlucky." << endl;
			break;

		default:
			cout << "Are you stupid or something? I said a number from 1 to 5." << endl;
		}

		if (input != 3) {
			cout << "You have " << 2 - count << " more chance." << flush;
			if (count < 2) {
				cout << " Pick again." << flush;
			}
			cout << endl;
		}

		cout << endl;

	} while (input != 3 && count < 2);

	cout << "That's it. Now screw off." << endl;

	return 0;
}