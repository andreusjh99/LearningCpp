/*
This section talks about the various ways to initialise a variable.
*/

int main()
{
    // No initialiser
    int a; // this instantiates a var with an indeterminate value.
    // avoid unless it is only temporary.

    // Copy initialisation
    //-------------------------
    /* This is perhaps the most common initialisation method.
        This was inherited from C.
        This copies the value on RHS of = to the value on LHS.

        This is efficient only for simple types like int.
        Also it doesn't allow initialising an object with list of data.
    */
    int b = 5;

    // Direct initialisation
    //---------------------------
    /* The initialiser is provided within ().
        
        For simple data types, copy and direct init are essentially the same.
        For more complicated types, direct init tends to be more efficient.
    */
    int c(5);

    // List initialisation
    //---------------------------
    /* The initialiser is provided within {}.

        Direct and copy init can't be used for all types of init
            eg. init an object with a list of data.
        An example: init a stringstream var with a char array.

        Preferred whenever possible.
    */
    int d{5};
    // Another advantage of this is that it disallows "narrow" conversions.
    //      This means if you try to use list init to initalise
    //      a var with a value it cannot safely hold, the compiler will throw a warning or an error.
    // For eg.
    //      int e{4.5};
    // copy and direct init will throw away the .5 while list init will throw a compilation error at you!

    // Finally, multiple initialisation
    //----------------------------------------
    int f{5}, g{5};
    int h, i = 5; // This only initialises i and not h!!

    return 0;
}