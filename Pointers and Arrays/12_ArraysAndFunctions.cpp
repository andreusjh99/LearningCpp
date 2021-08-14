/* 12. Arrays and Functions
This tutorial covers two things:
	a. returning array from functions
	b. taking in array as an argument for the function.

a. Returning arrays from functions
	1. using stack memory

			string* returnArray() {
				string texts[] = {"one", "two", "three"};
				return texts;
			}

	Same problem as we have with all the other types. The variable (array) is destroyed by the end of the scope.

	2. using heap memory

			string* returnArray() {
				string* ptexts = new string[3];
				return ptexts;
			}

	remember to release the memory with 'delete'
	**It is common to define a function to perform 'delete' and release the memory.
			void releaseMem(string* ptexts) {
				delete [] ptexts;
			}

b. Taking in arrays as arguments of functions
	1. taking in the array
		
			void showArray(string texts[]) {
				for (int i = 0; i < 3; i++) {
					cout << texts[i] << " " << flush;
				}
				cout << endl;
			}

		This works fine. The function is able to display all the elements.
		texts[] tells C++ that the fn is taking in an array, which is equivalent to a pointer.

		However, if you cout the sizeof(texts), it gives 4 bytes instead of 3 x 8 (since the length of texts is 3)
		This means the fn sees it as a pointer (because it lost track of the number of elements in the array).
		This is fine as long as your fn doesn't use the number of elements in its operation.
		However, if you really need the number of elements within the fn 
		because it will be used in some operations within the fn,
		just input it in.

	2. taking in the array and the number of elements

			void showArray(string texts[], int nElements) {
				for (int i = 0; i < nElements; i++) {
					cout << texts[i] << " " << flush;
				}
				cout << endl;
			}

		It is just as simple as that. An equivalent to this would be:

			void showArray(string *texts, int nElements) {
				for (int i = 0; i < 3; i++) {
					cout << texts[i] << " " << flush;
				}
				cout << endl;
			}

		string texts[] and string *texts are equivalent for the fn.
		The only diff between an array and a pointer is that
		the array remembers the number of elements.
		But this info is lost within the fn. 
		So array(string texts[]) and pointer (string *texts) are equivalent for the fn.

*/

#include <iostream>

using namespace std;

/////////////////////////////////////////////////////////////////////////////

//a. returning arrays from functions
/*
1. using stack memory
string* returnArray() {
	string texts[] = {"one", "two", "three"};
	return texts;
}
*/

//using heap memory
string* returnArray() {
	string* ptexts = new string[3];
	return ptexts;
}

//It is common to define a function to perform 'delete' and release the memory.
void releaseMem(string* ptexts) {
	delete [] ptexts;
}

/////////////////////////////////////////////////////////////////////////////

//b. taking in arrays as arguments of functions
void show0(string texts[]) {

	cout << "sizeof(texts): " << sizeof(texts) << endl; //4! 

	for (int i = 0; i < 3; i++) {
		cout << texts[i] << " " << flush;
	}

	cout << endl;

	//texts doubles as a pointer and an array (as expected).
	//texts[i] gives the element so it acts fine.
	//but when you try to look at the sizeof(texts), the size is only 4, ie the size of a pointer.
	//i.e. it lost track of the number of elements it has.

}

void show1(const int nElements, string texts[]) {

	cout << "sizeof(texts): " << sizeof(texts) << endl; //4! 

	for (int i = 0; i < nElements; i++) {
		cout << texts[i] << " " << flush;
	}

	cout << endl;

}

void show2(const int nElements, string* texts) {

	cout << "sizeof(texts): " << sizeof(texts) << endl; //4! 

	for (int i = 0; i < nElements; i++) {
		cout << texts[i] << " " << flush;
	}

	cout << endl;

	//Note: string texts[] and string* texts here are equivalent
	//texts[] tells c++ that it is an array. * texts tells c++ that it is a pointer.
	//i.e. they are the same thing as long as texts was initially defined as an array.
	//=> show1 and show2 are the same thing.
}

void show3(string (&texts)[3]) {

	cout << "sizeof(texts): " << sizeof(texts) << endl; //4! 

	for (int i = 0; i < 3; i++) {
		cout << texts[i] << " " << flush;
	}

	cout << endl;
}


int main() {

	//returning an array
	string* ptexts = returnArray();
	releaseMem(ptexts);

	//taking in an array as an argument
	
	string texts[] = { "one", "two", "three" };
	show0(texts);

	cout << endl;
	//As mentioned above, the array, after being passed in, lost track of the number of elements within the function.
	//If you need that information within the function. pass it in as an argument.
	show1(3, texts);

	cout << endl;
	//show1 and show2 are the same thing.
	//For show1, texts is passed in as an array. For show2, texts is passed in as a pointer.
	//There is no difference since within the function, the number of elements of texts is not remembered anyway.
	show2(3, texts);

	cout << endl;

	show3(texts);

	return 0;
}