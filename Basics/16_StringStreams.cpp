/* 16. String Streams
to concatenate different data types together.
** Unlike python, '+' doesn't work!**

	#include <sstream>
	stringstream ss;	//stringstream is an object
	ss << "Name is ";
	ss << name;
	...
	(add one item each line)

	string info = ss.str();		//convert into string

*/

#include <iostream>
#include <sstream> // for stringstream

using namespace std;

int main() {
	string name = "Andreus";
	int age = 20;

	stringstream ss;

	ss << "Name is: ";
	ss << name;
	ss << "; Age is: ";
	ss << age;

	string person = ss.str();

	cout << person << endl;

	return 0;
}