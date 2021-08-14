/* 3. C++ libraries

A library is a package of code that is meant to be reused by many programs. 
Conceptually, it consists of pre-defined functions and classes definitions. 

In C++, 
a library is a collection of compiler output "object" files (.o or .obj files) 
that have been archived into a single file.

The compilation process turns files containing C++ source code (.cpp, .cc, .h etc) into
files containing the equivalent assembly language(.asm, .s) which are then turned into
files containing the equivalent machine code (.obj, .o).
Usually, these are then knitted together into an executable file and
given the "paperwork" needed so they can be run by the operating system.
Alternatively, they can be collected together in a library file.

The standard library that came with your compiler was made this way.
For example, there could be iostream.cpp which has the functions and classes needed for input/output,
string.cpp which has the string class, and so on.
The compiler manufacturer compiled these source files into a library file and
arranged for this to be automatically added to all your C++ programs.



Typically, a C++ library comes in two pieces:

1) A header file that defines the functionality the library is exposing (offering) to the programs using it.
2) A precompiled binary (.o) that contains the implementation of that functionality 
pre-compiled into machine language.

Some libraries may be split into multiple files and/or have multiple header files.

Libraries are precompiled for several reasons. 
First, since libraries rarely change, they do not need to be recompiled often. 
It would be a waste of time to recompile the library every time you wrote a program that used them. 
Second, because precompiled objects are in machine language, 
it prevents people from accessing or changing the source code, 
which is important to businesses or people who 
don’t want to make their source code available for intellectual property reasons.

There are two types of libraries: static libraries and dynamic libraries.

1. Static library
A static library (also known as an archive) 
consists of routines that are compiled and linked directly into your program. 
When you compile a program that uses a static library, 
all the functionality of the static library that your program uses becomes part of your executable. 
On Windows, static libraries typically have a .lib extension, 
whereas on linux, static libraries typically have an .a (archive) extension. 

One advantage of static libraries is that 
you only have to distribute the executable in order for users to run your program. 
Because the library becomes part of your program, 
this ensures that the right version of the library is always used with your program. 
Also, because static libraries become part of your program, 
you can use them just like functionality you’ve written for your own program. 

On the downside, because a copy of the library becomes part of every executable that uses it, 
this can cause a lot of wasted space. 
Static libraries also can not be upgraded easy --
to update the library, the entire executable needs to be replaced.

2. Dynamic library

A dynamic library (also called a shared library)
consists of routines that are loaded into your application at run time. 
When you compile a program that uses a dynamic library,
the library does not become part of your executable -- it remains as a separate unit. 
On Windows, dynamic libraries typically have a .dll (dynamic link library) extension, 
whereas on Linux, dynamic libraries typically have a .so (shared object) extension. 

One advantage of dynamic libraries is that many programs can share one copy,which saves space. 
Perhaps a bigger advantage is that the dynamic library can be upgraded to a newer version 
without replacing all of the executables that use it.

Because dynamic libraries are not linked into your program, 
programs using dynamic libraries must explicitly load and interface with the dynamic library. 
This mechanism can be confusing, and makes interfacing with a dynamic library awkward. 
To make dynamic libraries easier to use, an import library can be used.


*3. Import Library
An import library is a library that automates the process of loading and using a dynamic library. 
On Windows, this is typically done via 
a small static library (.lib) of the same name as the dynamic library (.dll). 
The static library is linked into the program at compile time, 
and then the functionality of the dynamic library can effectively be used as if it were a static library. 
On Linux, the shared object (.so) file doubles as both a dynamic library and an import library. 
Most linkers can build an import library for a dynamic library when the dynamic library is created.

An import library typically contains declarations for all of the functionality in the dynamic library. 
With a static library, both the interface and code to implement that interface get linked 
into your executable, bloating your executable. 
With an import library, only the interface gets linked into your executable, 
the code that implements that interface stays in the dynamic library, 
which gets loaded dynamically and can be shared.

So the import library really just provides a convenient way to use a dynamic library.

*/