// print odd numbers from 13 to 49 using a for loop

#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int number = 13; number <= 49; number += 2) {
        cout << number << " ";
        sum += number;
    }

    cout << "\nThe sum of odd numbers from 13 to 49 is: " << sum << endl;

    return 0;
}
