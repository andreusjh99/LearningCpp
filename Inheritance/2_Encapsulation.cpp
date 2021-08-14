/* 2. Encapsulation
Encapsulation, in object-oriented programming, 
is the bundling of data with the methods that operate on that data, 
or the restricting of direct access to some of an object's components.
Encapsulation is used to hide the values or state of a structured data object inside a class, 
preventing unauthorized parties' direct access to them. 

Publicly accessible methods are generally provided in the class 
(so-called getters and setters) to access the values, 
and other client classes call these methods to retrieve and modify the values within the object.
*/

#include <iostream>
using namespace std;

class Animal {
private:
	string first_name;
	string last_name;
	string returnName() { return first_name + " " + last_name; }; //you can have member fns in private
public:
	Animal(string first_name, string last_name) : first_name(first_name), last_name(last_name) {}; //constructor
	void info() { cout << "My name is: " << returnName() << endl; };
};

int main() {

	Animal cat("Olivia", "Benson");
	cat.info();

	return 0;
}