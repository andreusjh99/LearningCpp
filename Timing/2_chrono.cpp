/*
Method 2: using the <chrono> library.
- Works on Linux and Window
- Measures wall time
- Can measures parts of program

The <chrono> lib has access to a few different clocks in the machine.
Each clock has different purposes and characteristics.
Egs of clocks include:
- high_resolution_clock: clock with the shortest tick period
- system_clock: wall clock time from the system-wide realtime clock
- gps_clock: clock for GPS time
etc.
    List of the clocks defined in C++ can be found here:
        https://en.cppreference.com/w/cpp/chrono

Typically, high_resolution_clock is the best choice and the most adequate.

*/

#include <iostream>
#include <chrono>

int main()
{
    double sum = 0;
    double add = 1;

    // Start measuring time
    auto begin = std::chrono::high_resolution_clock::now();

    int iterations = 1000 * 1000 * 1000;
    for (int i = 0; i < iterations; i++)
    {
        sum += add;
        add /= 2.0;
    }

    // Stop measuring time and calculate the elapsed time
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    // Note that you can use other units like std:chrono::hours, std::chrono::minutes etc.

    std::cout << "Result: " << sum << std::endl;

    std::cout << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"
              << std::endl;

    return 0;
}