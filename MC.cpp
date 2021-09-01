//Hackerrank test

///////////////////////////////////////////
//1. A virtual function...

//(see image)

/*

- create using the "virtual" keyword, i.e.

	class Hello {
		virtual void virFunc();
	}

- a member function that you expect to be redefined in derived classes.

- Functions in derived classes override virtual functions 
in base classes only if their type is the same.

- If a derived class does not provide an overriding implementation
of the virtual function of the base class, the def. impl. from the 
base class is used.

- Different derived classes can have different implementations. 

Difference with non-virtual function:
----------------------------------------
- Calling of a virtual function depends on the underlying 
class, while calling of a non-virtual fn depends on the pointer.

(In C++ OOP, you can define pointer to the derived class using 
either the derived class or the base class.

Eg. a base class Base with derived class Derived.

	Derived aDerivedClass;
	
	Derived *pDerived = &aDerivedClass; // pointer using Derived.
	Base *pBase = &aDerivedClass; // pointed using Base.

)
So, given a virtual fn (virFunc()) and a non-virtual fn (nonVirFunc()),
- pDerived->virFunc() and pBase->virFunc() make no difference.
	It will still call the derived version of virFunc() (if implemented)
	since the underlying class of the pointer is the Derived class.
	
- pDerived->nonVirFunc() and pBase->nonVirFunc() give diff behaviours.
	pDerived->nonVirFunv() calls the derived version of nonVirFunc(),
	while pBase->nonVirFunc() calls the base version of nonVirFunc().

*/

///////////////////////////////////////////
//2. An abstract function...

//(see image)

/*

- created using both the virtual keyword and the pure specifier (= 0)
	virtual void absFunc() = 0; // note the pure specifier.

- In C++, abstract functions are pure virtual functions.

- Abstract functions only exist in abstract classes.
	In fact they are what make a class abstract.
	You can't create an object of an abstract class type, i.e.
	you can't instantiate an abstract class.
	You can use pointers and references to abstract class types though.
	
	Eg. an abstract base class Abs with derived class Derived.
	
		Derived aDerivedClass;
		Abs *pAbs = &aDerivedClass; // pointer using an abstract class.

	To create an abstract class, at least one of your functions is 
	a pure virtual member fn.
	

- If the derived class does not provide an impl for the abs fn, 
	the derived class is also abstract.
	
- Can have multiple impl. (since multiple classes can be derived 
	from the same abstract base class.
	
- Used to define an interface (or traditionally known as contract) too.


Extra on interface in C++:
-----------------------------
- C++ has no built-in concepts of interfaces.
- Implement it using abstract classes.

- Requirements: 
	-> Only pure virtual member fns
	-> Only static const data
	-> a virtual destructor.
		
		class Interface {
			virtual ~Interface() {};
		}

Extra on virtual destructors:
-----------------------------
- Good practice to always have destructors of an abstract class virtual.
- This is to prevent memory leaks.

- This is because if you use a pointer based on the abstract class 
	for the derived class (Base *pBase = &aDerivedClass), 
	when you destroy the class, the destructor of the base class
	is called instead of the derived class. This is a problem when
	the base class is abstract. You will have undefined behaviour.
	
- With the virtual destructor, this ensures the destruction rule is followed.
	That is, the destructor of the derived class is called first,
	then the base destructor.
	
- Note that there is no need for a virtual constructor, the construction 
	rule is always followed (i.e. base constructor then derived constructor.)

*/

///////////////////////////////////////////
//4. ...#

///////////////////////////////////////////
//5. Time complexity
//(see image)

/*
Reasoning: 
- n, n-1, n-2, ..., 1 => n(n+1)/2 => O(n^2)


Extra on log(n) complexity
---------------------------
- O(log n) when we do divide and conquer type of algorithms.

- Quick sort: you divide array into two parts and each time it takes
	O(n) time to compare against the pivot(s). So O(nlogn).
	
- Binary search is O(n), but it is often mistaken as divide and conquer.
	It is more decrease and conquer.

*/
