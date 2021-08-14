/* 5. Reversing a string
A neat trick using pointers and char arrays
- Saving a string as a char array.
- Swap start and end elements, then move start and end positions inwards.

Alternative:
use stringstream
loop through the char array from end and append to stringstream.
*/

#include <iostream>

using namespace std;

int main() {
	char text[] = "Hello There";

	char* pStart = text;
	int length = sizeof(text) - 1; //since string in char array is one longer than the string itself.
	char* pEnd = &text[length - 1];

	cout << "Expecting length = pEnd - pStart: " << pEnd - pStart << endl;
	
	while (pStart < pEnd) {
		char save = *pStart;
		*pStart = *pEnd;
		*pEnd = save;

		pStart += 1;
		pEnd -= 1;
	}

	cout << text << endl;
}