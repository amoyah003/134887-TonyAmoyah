// While loop password attempt (block after 3 wrong tries)
#include <iostream>
using namespace std;

int main() {
    string correctPassword = "T1234";
    string userpassword;
    int maxAttempts = 3;
    int attempts = 0;

    while (attempts < 3) {
        cout << "Enter password: ";
        cin >> userpassword;

        if (userpassword == correctPassword) {
            cout << "Logged In: Access Granted!" << endl;
            // call a function to load the main menu here
            return 0;
        }

        attempts++; // loop termination condition
        maxAttempts--;
        if (maxAttempts > 0) {
            cout << "Incorrect password. You have " << maxAttempts << " attempt(s) left. Try again." << endl;
    }
    else 
    {
        cout << "Incorrect password. Try again." << endl;
    }
}
cout << "Password blocked! Contact administrator." << endl;

return 0;
}
