/* 2. Arithmetic
+, -, *, /, %
+=, -=, *=, /=, %=
a/b is floor division if both a and b are int's.

casting:
(double) integerValue : casting an integer into a double
(int) doubleValue : casting a double into a integer.
!! int removes any value after the decimal point, eg (int)7.89 = 7 (not 8).
*/

#include <iostream>

// using namespace std;

int main()
{
	//+, +=
	int value1 = 1;
	std::cout << value1 << "; " << std::flush; //1
	value1 = value1 + 1;
	std::cout << value1 << "; " << std::flush; //2
	value1 += 1;
	std::cout << value1 << std::endl; //3

	//-, -=
	int value2 = 10;
	std::cout << value2 << "; " << std::flush; //10
	value2 = value2 - 1;
	std::cout << value2 << "; " << std::flush; //9
	value2 -= 1;
	std::cout << value2 << std::endl; //8

	//*, *=
	int value3 = 3;
	std::cout << value3 << "; " << std::flush; //3
	value3 = value3 * 5;
	std::cout << value3 << "; " << std::flush; //15
	value3 *= 5;
	std::cout << value3 << std::endl; //75

	// /, /= : floor division
	int value4 = 24;
	std::cout << value4 << "; " << std::flush; //24
	value4 = value4 / 3;
	std::cout << value4 << ";" << std::flush; //8
	value4 /= 3;
	std::cout << value4 << std::endl; //2 (2.6667)

	// %, %=
	int value5 = 26;
	std::cout << value5 << "; " << std::flush; //26
	value5 = value5 % 2;
	std::cout << value5 << "; " << std::flush; //0
	value5 %= 2;
	std::cout << value5 << std::endl; //0

	//casting
	int value6 = 30;
	std::cout << (double)value6 << std::endl; //30.0

	double value7 = 3.67;
	std::cout << (int)value7 << std::endl; //3

	return 0;
}