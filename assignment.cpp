// assignment.cpp
// Name: [Your Full Name]
// Reg. No: [Your Reg Number]
// Course: [Your Course Name]
// Description: Combined program for Assignment Questions 1–3

#include <iostream>
#include <cmath>
using namespace std;

// =========================
// QUESTION 1 FUNCTION
// =========================
void question1() {
    cout << "\n--- Question 1: Basic Output and Escape Sequences ---\n\n";
    cout << "This is my first C++ program.\n";
    cout << "   I am learning how to use escape sequences.\n";
    cout << "\tThey help me format output neatly!\n";
    cout << "End of demonstration.\n";
}

// =========================
// QUESTION 2 FUNCTION
// =========================
void question2() {
    cout << "\n--- Question 2: Stick Man, Stick Car, Stick Cow, and Stick House ---\n\n";
    cout << "\t  O     ______      (__)\n";
    cout << "\t /|\\  /|_||_\\`.__   (oo)\\_______\n";
    cout << "\t / \\ (   _    _ _\\   (__)\\       )\\/\\\n";
    cout << "\t      =`-(_)--(_)-'      ||----w |\n";
    cout << "\t                         ||     ||\n";
    cout << "\n";
    cout << "\t      /\\\n";
    cout << "\t     /  \\\n";
    cout << "\t    /____\\\n";
    cout << "\t   | .--. |\n";
    cout << "\t   | |  | |\n";
    cout << "\t   | |__| |\n";
    cout << "\t   |______|\n";
    cout << "_________________________________________________________\n";
}

// =========================
// QUESTION 3 FUNCTION
// =========================
void question3() {
    cout << "\n--- Question 3: Basic Calculator ---\n\n";

    double num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "\n--- Calculation Results ---\n";
    cout << "Addition: " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;

    if (num2 != 0)
        cout << "Division: " << num1 / num2 << endl;
    else
        cout << "Division: Undefined (cannot divide by zero)\n";

    cout << num1 << " raised to power " << num2 << ": " << pow(num1, num2) << endl;
    cout << "Square root of " << num1 << ": " << sqrt(num1) << endl;
    cout << "Square root of " << num2 << ": " << sqrt(num2) << endl;
}

// =========================
// MAIN PROGRAM
// =========================
int main() {
    int choice;

    cout << "=========================================\n";
    cout << "   C++ ASSIGNMENT MENU\n";
    cout << "=========================================\n";
    cout << "1. Question 1 - Output & Escape Sequences\n";
    cout << "2. Question 2 - Stick Figures & House\n";
    cout << "3. Question 3 - Basic Calculator\n";
    cout << "4. Exit\n";
    cout << "=========================================\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            question1();
            break;
        case 2:
            question2();
            break;
        case 3:
            question3();
            break;
        case 4:
            cout << "Exiting program... Goodbye!\n";
            return 0;
        default:
            cout << "Invalid choice! Please run again and select 1–4.\n";
    }

    cout << "\n-----------------------------------------\n";
    cout << "Program completed successfully.\n";
    cout << "-----------------------------------------\n";

    return 0;
}
