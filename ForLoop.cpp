// print even numbers from 12 to 50 using a for loop
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
// for loop to iterate through even numbers from 12 to 50
    for (int number = 12; number <= 50; number += 2) {
        cout << number << " ";
        sum += number;
    }
    cout << "\b " << ""; // To remove the last comma and space
    cout << "\nThe sum of even numbers from 12 to 50 is: " << sum << endl;
    return 0;
}
