/* 4. Getters and setters
Constructors: initialise a member variable
Getters: retrieves the member variable
Setters: changes the member variable
*/

#include <iostream>
#include "Person.h"

using namespace std;

int main() {
	Person person;
	cout << person.getName() << endl;

	person.setName("Andreus");
	cout << person.getName() << endl;

	return 0;
}