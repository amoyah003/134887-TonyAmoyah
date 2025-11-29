// simple do-while loop example in C++ print even numbers from 12 to 50

#include <iostream>
using namespace std;

int main() {
    int number = 12, sum = 0;

    do {
        cout << number << " ";
        sum += number;
        number += 2;
    } while (number <= 50);

    cout << "\b " << ""; // To remove the last comma and space
    cout << "\nThe sum of even numbers from 12 to 50 is: " << sum << endl;
    return 0;
}
