/*
Command line arguments
------------------------------
Command line arguments are optional string args that are passed by the OS to the program when it is launched.
They are essentially function parameters for the main() fn.

To start, CL args are passed in after the executable name
    $ ./myProgram hello.txt
Multiple args are passed in with a space in between:
    $ ./myProgram hello.txt bye.txt

How are these arguments used?
The main() fn now has two arguments:
    int main(int argc, char *argv[])

argc: an int containing the count of CL arguments.
    argc >= 1 as the program name is the first arg.
argv: pointer to an array of C-style string.
    length of argv is argc.
    ! Note that argv[i] is a char array itself, repr each arg.

The first argument (the program name) could be an empty str or the program name,
    depending on the OS.
The remaining arguments are kept as strings,
    despite integer values etc being passed in.
    So to use it as an int, you need to convert it (see below)
*/

#include <iostream>
#include <sstream> // for std::stringstream
#include <string>

int main(int argc, char *argv[])
{
    if (argc <= 1)
    {
        if (argv[0])
        {
            std::cout << "Usage: " << argv[0] << " <number>\n";
        }
        else // when the program name ended up as an empty string.
        {
            std::cout << "Usage: <program name> <number>\n";
        }

        return 1; // assuming we want an additional number argument for our program.
    }

    // Dealing with a number argument
    std::stringstream toconvert{argv[1]}; // initialising a sstream var with argv[1]

    int myint{};
    if (!(toconvert >> myint)) // the conversion
    // std::stringstream works much like std::cin.
    // we use the operator >> to extract the value of the integer variable into myint.
    {
        myint = 0; // if conversion fails, set myint to a default value, say 0.
    }

    std::cout << "Got integer: " << myint << '\n';

    return 0;
}

/*
OS parsing the command line argument:
$ ./MyProgram Hello World
=> three arguments (./MyProgram, "Hello", "World")

$ ./MyProgram "Hello World"
=> two arguments (./MyProgram, "Hello World")

$ ./MyProgram \"Hello World\"
=> three arguments (./MyProgram, '"Hello', 'World"')
    Using backslash allows you to use the actual symbols.

*/