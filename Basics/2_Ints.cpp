// 2. Integers

#include <iostream>
using namespace std;

int main() {
	int number_cats = 5;
	int number_dogs = 7;

	cout << "number of cats: " << number_cats << endl;
	cout << "number of dogs: " << number_dogs << endl;
	cout << "Total number of animals: " << number_cats + number_dogs << endl;

	number_dogs++;
	cout << "New dog acquired!" << endl;
	cout << "number of dogs: " << number_dogs << endl;

	return 0;
}