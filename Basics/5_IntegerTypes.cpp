// 5. Integer types
// 3 most popular types: int, long int, short int
//		int: 4 bytes
//		long int: 8 bytes (8 for 64-bit system, 4 for 32-bit system)
//		short int: 2 bytes
// Unsigned int types: no signs so one more bit available for storing the value

#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
	cout << "Biggest value for int: " << INT_MAX << endl;  //2^31
	cout << "Smallest value for int: " << INT_MIN << endl; //-2^31

	cout << "Size of int: " << sizeof(int) << endl;				//4
	cout << "Size of long int: " << sizeof(long int) << endl;	//4
	cout << "Size of short int: " << sizeof(short int) << endl; //2

	return 0;
}