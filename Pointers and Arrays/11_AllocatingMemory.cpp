/* 11. Allocating memory
Here we talk about allocating heap memory to different types.
(See below).
*/

#include <iostream>

using namespace std;

class Animal {
private:
	string name;
public:
	Animal() { cout << "Constructor called." << endl; };
	Animal(const Animal& other) { cout << "Copy constructor called." << endl; };
	~Animal() { cout << "Destructor called." << endl; };

	void setName(string name) { this->name = name; };
	void speak() { cout << "My name is " << name << endl; };
};

int main() {
	int* pvalue = new int;
	*pvalue = 10;
	cout << *pvalue << endl;
	delete pvalue;

	cout << endl;

	char* pchar = new char;
	*pchar = 'a';
	cout << *pchar << endl;
	delete pchar;

	cout << endl;

	Animal* pcat = new Animal;
	pcat->setName("Meredith");
	pcat->speak();
	delete pcat;

	cout << endl;

	//arrays
	/*
	The only special thing about using new and delete for array is:
	The square brackets
	*/

	int* parray1 = new int[10]; //need to specify how many elements!
	parray1[6] = 7;
	cout << parray1[6] << endl;
	delete[] parray1; //the square brackets for arrays!!

	cout << endl;

	Animal* parray2 = new Animal[10];
	parray2[5].setName("Bob");
	parray2[5].speak();
	delete[] parray2; //the square brackets!

	cout << endl;

	//exercise
	Animal* parray3 = new Animal[26];
	char c = 'a';
	
	for (int i = 0; i < 26; i++, c++) {
		string name(1, c); //turning a char into a string
		parray3[i].setName(name);
		parray3[i].speak();
	}
	delete[] parray3;

	return 0;
}