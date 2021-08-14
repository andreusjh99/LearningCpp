/* 1. Dynamic memory allocation
////////////////////////////////////////

malloc and new
===================
In C, malloc is used to dynamically allocate memory.
It also works in C++ because C++ is backward-compatible with C.
With C++, the "new" keyword was introduced for this purpose.


malloc
---------------

	void *p = malloc(10); // allocates 10 bytes memory. p is the pointer to the first byte.
	
By default, malloc returns a (void *) type.
If for some reason the allocation fails (for eg not enough memory), 
	then p = NULL. (a null pointer)
So it is good practice to check if p is a null pointer before moving ahead.

! Malloc allocated on the heap.

realloc
---------------
Say, for some reason you want to reallocate a different amount of memory, then 
	
	void *np = realloc(p, 20); 
	// reallocates 20 bytes memory. 
	// The original 10 byte data will take up the first 10 bytes of the new memory.
	
By default, realloc also returns a (void *) type.
After reallocation, p will be useless. This is called a dangling pointer.
It is good practice to set it to null. (p = NULL;)
Similarly, np could be NULL if the reallocation fails.

If the size is reduced, data may be lost.
If the size is increased and the function is not able to extend the current allocation,
	it will automatically allocate a new memory area and copy data across.

free
---------------
In the end, when you don't need those memory anymore, free them

	free(np); np = NULL;

!! Note that only pointers created using malloc should be used with realloc and free, 
or undefined behaviour may happen.
	
Now, practically, you would want a useful pointer, so (void *) is not really a useful type. 
We can cast the output of malloc and realloc to other types.
(see below)

!! Note that you will need the stdlib.h library for malloc, realloc and free
	
*/

#include <stdlib.h>
#include <iostream>

int main()
{
	int *q = (int *)malloc(sizeof(int) * 10);
	// allocates 10 ints worth of memory, and casts the pointer to (int *) type.
	q[0] = 1;
	std::cout << q[0] << std::endl;

	int *nq = (int *)realloc(q, sizeof(int) * 8);
	// reallocates 8 ints worth of memory and casts the pointer to (int *) type.
	// Note that in this case, the last two integers in the original memory
	// will be lost as the reallocated memory is smaller.
	q = NULL;
	std::cout << nq[0] << std::endl;

	free(nq);
	nq = NULL;

	return 0;
}
