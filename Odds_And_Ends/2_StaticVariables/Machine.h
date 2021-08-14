#pragma once

#include <iostream>
using namespace std;

class Machine
{
private:
	
	static int count; // a static private variable
	
	int id; // a private variable

public:
	Machine() { count++; id = count; } // constructor

	static int const YEAR = 2019; // a static public constant variable. You initialise it here
	static void NoOfMachines() { cout << "count: " << count << endl; } // a static method

	void info() { cout << "ID: " << id << endl; } // a normal method

};

