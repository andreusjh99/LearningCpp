// 1. Outputting text
// cout == print
// cout << ... << endl;

#include <iostream> // for cout
using namespace std;

int main() {
	cout << "This is some text" << endl;
	cout << "This is some more text" << flush; //flush: stays on the same line without any space
	cout << "Haha. See?" << endl; //endl: enters the next line

	//output multiple statements at once
	cout << "My name is " << "Andreus" << endl; 
	cout << "My name is" << 5 << endl; //works for string and int too!

	return 0;
}