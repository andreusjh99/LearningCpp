// 1. Outputting text
// cout == print
// cout << ... << endl;

// cerr is similar to cout, but usually used for debugging (i.e. temporary output)
/*One reason is that std::cout may be buffered, 
	which means there may be a pause etween when you ask std::cout 
	to output info and when it actually does.
	If you output using std::cout and then your program crashes immediately afterwards,
	std::cout may or may not have actually output yet.
std::cerr on the other hand is not buffered, 
	which means anything you send to it will output immediately.
*/

#include <iostream> // for cout
// using namespace std;

int main()
{
	std::cout << "This is some text" << std::endl;
	std::cout << "This is some more text" << std::flush; //flush: stays on the same line without any space
	std::cout << "Haha. See?" << std::endl;				 //endl: enters the next line

	//output multiple statements at once
	std::cout << "My name is "
				 "Andreus"
			  << std::endl;
	std::cout << "My name is" << 5 << std::endl; //works for string and int too!

	//cerr
	std::cerr << "hello" << std::endl;

	return 0;
}