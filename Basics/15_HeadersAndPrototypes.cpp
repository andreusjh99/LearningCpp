/* 15. Headers and Prototypes
For a function to be run, the compiler only needs to know what a function takes in and returns.
We define this before the main() function, for eg:
	int functionName(string parameterName);
This is called the prototype of a function.

We can define prototypes in a separate file known as a header file.
Header files have .h extension.
We then include the header files before the main() function.
*/


#include <iostream>

#include "utils.h"

/*
now, <> or "" for include?
The convention is that, if its a file from a standard location, for eg iostream.h, <>
If its a file created within a project, use "x.h".
*/

using namespace std;

int main() {

	show_menu();

	int option = make_selection();

	bool select = process_selection(option);

	if (select == true) {
		cout << "Done!" << endl;
	}

	return 0;
}


//Functions are defined here for now. They should go into another .cpp file.
void show_menu() {
	cout << "MENU" << endl;
	cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
	cout << "1. Search" << endl;
	cout << "2. View record" << endl;
	cout << "3. Quit" << endl;
	cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
	cout << endl;

	cout << "Select an item from the menu > " << flush;
}

int make_selection() {
	int input;
	cin >> input;

	cout << endl;
	cout << "You selected " << input << "." << endl;

	return input;
}

bool process_selection(int option) {
	bool select = false;

	switch (option) {
	case 1:
		cout << "Searching..." << endl;
		select = true;
		break;
	case 2:
		cout << "Retrieving record..." << endl;
		select = true;
		break;
	case 3:
		cout << "Quitting..." << endl;
		select = true;
		break;
	default:
		cout << "Input not recognised. Please select an item from the menu." << endl;
	}

	return select;
}



/*
****************************************
If you want to call a function from more than one source code file, C++ imposes two constraints:
1) The compiler must be able to see the function prototype at the point where the function is called
2) A function can only be defined in one source code file

Let's say you have two source code files, a.cpp and b.cpp, and you need to call somefunc() in both of them. 
If you put the definition of somefunc() in both a.cpp and b.cpp,
you will get an error when you try to build it.
So you write a header file, somefunc.h, and #include this in both files.

If you put the definition of somefunc() in the header file, then this definition will appear 
in both a.cpp and b.cpp when the header file is included. 
You have effectively the same situation as before, and you will get the same build error as before.

The usual way to solve this is to write another source code file, somefunc.cpp, 
put the function definition in there and add it to the build. 
somefunc.h contains only the prototype for somefunc() and is included in all three source files. 
So now we have met both the constraints: the compiler can see the prototype when the function is called,
because it is in the included file, and the function is only defined in a single file, somefunc.cpp.

(You could also put in the definition of somefunc() in either a.cpp or b.cpp, but not both, 
if it makes more sense to put it there. 
In general, code should be divided between source code files in a logical way;
this makes it easier to keep track of things in a large project. 
Usually, if something needs its own header file, it should have its own source file as well.)
****************************************
*/