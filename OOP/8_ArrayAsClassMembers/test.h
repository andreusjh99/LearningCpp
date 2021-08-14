#include <iostream>
using namespace std;

#pragma once
class test
{
private:
	//easiest way
	static const int length = 5;
	int array1[length] = {}; // note that length is STATIC and CONST!
	//here we are using stack memory. So it needs to know how much memory is allocated while compiling.
	//Therefore, we need to give a static const number for the length

	//dynamic length (ie to be able to configure length)
	int no_of_items;
	int* array2;
	//in this approach, you allocate the memory only when the class is instantiated.
	//This avoids errors because now the dynamic length of the array is set only when the class is instantiated.
	//then the array is only created after the dynamic length is known.
	//DO remember to release the memory in the destructor though!


public:
	test(int no_of_items) {};
	~test() { delete[] array2; };


};

