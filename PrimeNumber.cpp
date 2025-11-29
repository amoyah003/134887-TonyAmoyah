// print prime numbers from 1 to 100

#include <iostream>
using namespace std;

int main() {
    cout << "Prime numbers from 1 to 100:\n";

    for (int number = 2; number <= 100; number++) {
        bool isPrime = true;

        for (int i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << number << " ";
        }
    }

    cout << endl;
    return 0;
}
