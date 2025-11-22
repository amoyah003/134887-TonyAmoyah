// Even Numbers from 12 to 28 using while loop
#include <iostream>
using namespace std;

int main() {
    int num = 12; // Starting number
    cout << "Even numbers from 12 to 28 are:" << endl;
    while (num <= 28) {
        cout << num << " ";
        num += 2; // Increment by 2 to get the next even number
    }
    cout << endl; // New line after printing all numbers
    return 0;
}