/* 12. Multi Dimensional Array
	- Initialising:
	int values[m][n] = {
		{...},
		{...}
	};

	The arrays in the array have to be of the same length.

	** BEWARE: It's okay to not specify m but it is MANDATORY to specify n or c++ thinks the array is 1d with length m x n**

	- Shape of multi-d array:
	Again, sorry, no built-in .shape() attribute.
	Use sizeof() and perform some math.
	See below for example.
*/

#include <iostream>

using namespace std;

int main() {
	//Initialising a multi-d array
	cout << "Multi-dimensional array of integers" << endl;

	int values[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << values[i][j] << " " << flush;
		}

		cout << endl;
	}

	cout << endl;

	//Shape of multi-d array
	cout << "Shape of multi-d array" << endl;

	int shape0 = sizeof(values) / sizeof(values[0]); //3
	int shape1 = sizeof(values[0]) / sizeof(int); //4

	cout << "Values has " << shape0 << " rows and " << shape1 << " columns." << endl;

	return 0;
}