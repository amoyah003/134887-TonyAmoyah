#include <iostream>

int main() {
    int number, sum = 0;
    do {
        std::cout << "Enter a number (0 to stop): ";
        std::cin >> number;
        sum += number;
    } while (number != 0);

    std::cout << "Sum of entered numbers: " << sum << std::endl;
    return 0;
}