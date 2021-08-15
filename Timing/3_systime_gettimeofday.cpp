/*
Method 3: using the <sys/time.h> library and the gettimeofday() method
- Works on Linux and Windows
- Measures wall time
- Can measures parts of program

This method uses the gettimeofday() method
gettimeofday() takes in two argument: struct timeval and struct timezone
    The second argument is often set as 0 or NULL since we don't really care about the timezone 
        as long as we use the same for both start and end times.
    It returns the time elapsed since 00:00:00 UTC on 1/1/1970 (called Epoch time)
    The time is returned in the form of a struct timeval,
        which has seconds and microseconds as attributes.
    The actual time needs to be calculated from those manually.
*/

#include <stdio.h>
#include <sys/time.h>

int main()
{
    double sum = 0;
    double add = 1;

    // Start measuring time
    struct timeval begin, end;
    gettimeofday(&begin, 0);

    int iterations = 1000 * 1000 * 1000;
    for (int i = 0; i < iterations; i++)
    {
        sum += add;
        add /= 2.0;
    }

    // Stop measuring time and calculate the elapsed time
    gettimeofday(&end, 0);
    long seconds = end.tv_sec - begin.tv_sec;
    long microseconds = end.tv_usec - begin.tv_usec;
    double elapsed = seconds + microseconds * 1e-6;

    printf("Result: %.20f\n", sum);

    printf("Time measured: %.3f seconds.\n", elapsed);

    return 0;
}