#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono; // Using the chrono namespace for time-related functions

int main ()
{
    auto start = high_resolution_clock::now(); // Start time measurement
    // Do some work here
    auto end = high_resolution_clock::now(); // End time measurement
    duration<double> duration = end - start; // Calculate duration
    cout << "Elapsed time: " << duration.count() << " seconds" << endl;
    return 0;

} 