/* 13. Namespaces
c++ doesnt allow the same class names to be used twice.
Usually we wouldn't want that either.
But say if we are using a third-party library and we want to use a class 'year' from the library,
if we already define a "year" variable somewhere earlier in the code,
we won't be able to use that class from the third-party library.

There are two things we can do. 
1. Change our class name to something else. 
This could be quite troublesome.

2. Use a namespace for our 'year' class.
This way c++ will know which namespace each 'year' class is using.

By using different namespaces, you are able to use the same name for different classes.

How do you create a new namespace?
	namespace blah {

	//your code here

	}

Everything within the curly brackets will be using the namespace blah.

To use namespace, remember it's similar to modules and fns in python.
You could specify which namespace you are using in the source code by including
	using namespace blah;
or you could specify it right before the variable you created using the namespace.
	blah::Cat cat;

**If you have Cat in both std namespace and blah namespace and you include both
	using namespace std;
	using namespace blah;
statements, then C++ will still not know what namespace Cat is using.
So the ideal way will be to specify it right before the variable.
	blah::Cat cat1;
	std::Cat cat2;

**NOTE!!! This doesn't allow you to use the same variable name for both Cat objects 
despite them being from diff namespaces
*/

#include <iostream>

#include "animal1.h"
#include "animal2.h"

using namespace std;
using namespace cat1;

int main() {

	//either you include the namespace above,
	Cat cat_1("Meredith");
	cat_1.speak();

	//or you specify the namespace. This way you don't need to include it above.
	cat2::Cat cat_2("Olivia");
	cat_2.speak();
}