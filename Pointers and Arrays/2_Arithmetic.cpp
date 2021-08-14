/* 2. Arithmetic
+, -, *, /, %
+=, -=, *=, /=, %=
/ is floor division

casting:
(double) integerValue : casting an integer into a double
(int) doubleValue : casting a double into a integer.
** int removes any value after the decimal point, eg (int)7.89 = 7 (not 8).
*/

#include <iostream>

using namespace std;

int main() {
	//+, +=
	int value1 = 1;
	cout << value1 << "; " << flush; //1
	value1 = value1 + 1;
	cout << value1 << "; " << flush; //2
	value1 += 1;
	cout << value1 << endl; //3

	//-, -=
	int value2 = 10;
	cout << value2 << "; " << flush; //10
	value2 = value2 - 1;
	cout << value2 << "; " << flush; //9
	value2 -= 1;
	cout << value2 << endl; //8

	//*, *=
	int value3 = 3;
	cout << value3 << "; " << flush; //3
	value3 = value3 * 5;
	cout << value3 << "; " << flush; //15
	value3 *= 5;
	cout << value3 << endl; //75

	// /, /= : floor division
	int value4 = 24;
	cout << value4 << "; " << flush; //24
	value4 = value4 / 3;
	cout << value4 << ";" << flush; //8
	value4 /= 3;
	cout << value4 << endl; //2 (2.6667)

	// %, %=
	int value5 = 26;
	cout << value5 << "; " << flush; //26
	value5 = value5 % 2;
	cout << value5 << "; " << flush; //0
	value5 %= 2;
	cout << value5 << endl; //0

	//casting
	int value6 = 30;
	cout << (double)value6 << endl; //30.0

	double value7 = 3.67;
	cout << (int)value7 << endl; //3

	return 0;
}