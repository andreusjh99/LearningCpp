/* 6. Floating Point Types
3 common types: float, double, long double
double and long double are for more significant figures.
float: 4 bytes
double: 8
long double: 8
*/ 

#include <iostream>
#include <iomanip> //to change output format

using namespace std;

int main() {
	float fvalue = 34.534;
	cout << "float: " << fvalue << endl;

	//change output format
	cout << "float (fixed): " << fixed << fvalue << endl; //34.534000
	cout << "float (scientific): " << scientific << fvalue << endl; //3.4534000e+01

	//increase number of sig fig being outputted
	cout << "float (fixed): " << setprecision(20) << fixed << fvalue << endl;
	//setprecision changes the number of sfs being shown, BUT it doesnt change the number of sfs being stored.
	   
	//double and long double
	double dvalue = 34.534;
	cout << "double: " << setprecision(20) << dvalue << endl;

	long double lvalue = 34.534;
	cout << "long double: " << setprecision(20) << lvalue << endl;

	cout << "size of float:" << sizeof(float) << endl; //4
	cout << "size of double:" << sizeof(double) << endl; //8
	cout << "size of long double:" << sizeof(long double) << endl; //8 or 16

	return 0;
}