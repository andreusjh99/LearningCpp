/*
Method 5: using <time.h> library and clock() method.
- Works on Linux and Windows
- Measures CPU time (Linux) and wall time (Windows)
- Can measures parts of program

Using the same library as method 4 (time() method), clock() is used instead.
    clock() returns the number of ticks since the program started executing.
    Dividing the result by the const CLOCKS_PER_SEC gives you the number of seconds.

*/

#include <stdio.h>
#include <time.h>

int main()
{
    double sum = 0;
    double add = 1;

    // Start measuring time
    clock_t start = clock();

    int iterations = 1000 * 1000 * 1000;
    for (int i = 0; i < iterations; i++)
    {
        sum += add;
        add /= 2.0;
    }

    // Stop measuring time and calculate the elapsed time
    clock_t end = clock();
    double elapsed = double(end - start) / CLOCKS_PER_SEC; // cast to double so the result is a double.

    printf("Result: %.20f\n", sum);

    printf("Time measured: %.3f seconds.\n", elapsed);

    return 0;