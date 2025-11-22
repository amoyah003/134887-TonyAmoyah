// Sum of numbers from 20 to 25 using while loop
#include <iostream>
using namespace std;

int main() {
    int i = 20;
    int sum = 0;

    // Add all numbers from 20 to 25
    while (i <= 25) {
        sum += i;
        i++;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}
