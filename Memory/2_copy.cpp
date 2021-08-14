/* 2. Copy data 
////////////////////////////////////////

memcpy and memmove
----------------------
They are similar, with one crucial difference.
Let's look at memcpy first

void * memcpy(void * destination, const void * source, size_t num)
--------------------------------
memcpy is used to copy num bytes of data directly from a source location to a destination location.
Source and destination are pointers here.

The underlying type of the data (or pointers) does not matter. 
The result is a binary copy of the data.

! memcpy always copy exactly num bytes, and does not check for terminating characters in source.
The size of the arrays pointed to by both destination and source should be at least num bytes,
and SHOULD NOT OVERLAP.

!!! note that due to historical reasons, memcpy is in string.h!

void * memmove(void * destination, const void * source, size_t num)
---------------------------------
memmove is the same as memcpy, but it allows overlapping destination and source arrays.
Everything else is the same.
You can assume as if the data is copied to an intermediate location.

! note that despite the move in memmove, it is a copy function.

memcpy or std::copy?
--------------------------------
Not sure. There is a debate.
But memcpy only works with pointers, whereas std::copy works with any iterables (maps, vectors etc.)
For std::copy and std::copy_backward, see copy_and_move_2

*/

#include <iostream>
#include <string.h> // for memcpy and strlen

struct
{
    char name[40];
    int age;
} person, person_copy;

int main()
{
    char myname[] = "Andreus";

    // Using memcpy to copy string
    memcpy(person.name, myname, strlen(myname) + 1);
    person.age = 22;

    // Using memcpy to copy structure
    memcpy(&person_copy, &person, sizeof(person));

    std::cout << "person_copy, name: " << person_copy.name << ", age: " << person_copy.age << std::endl;

    return 0;
}