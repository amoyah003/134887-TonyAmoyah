#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName, middleName, lastName, fullName, alias;
    string favoriteMeal, favoriteMovie, reason;

    // Collect inputs
    cout << "Enter First Name: ";
    getline(cin, firstName);

    cout << "Enter Middle Name: ";
    getline(cin, middleName);

    cout << "Enter Last Name: ";
    getline(cin, lastName);

    cout << "Enter Full Name: ";
    getline(cin, fullName);

    cout << "Enter Alias: ";
    getline(cin, alias);

    cout << "Enter Favorite Meal: ";
    getline(cin, favoriteMeal);

    cout << "Enter Favorite Movie: ";
    getline(cin, favoriteMovie);

    cout << "Why are you in this class? ";
    getline(cin, reason);

    // Create the frame width
    int width = fullName.length() + 6;   // Space for "*  Full Name  *"

    // Top border
    for (int i = 0; i < width; i++) cout << "*";
    cout << endl;

    // Title (Full Name)
    cout << "*  " << fullName;
    // Padding to complete the frame width
    for (int i = 0; i < width - (fullName.length() + 4); i++) cout << " ";
    cout << "  *" << endl;

    // Bottom border for title
    for (int i = 0; i < width; i++) cout << "*";
    cout << "\n\n";

    // Profile Content
    cout << "First Name: " << firstName << endl;
    cout << "Middle Name: " << middleName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Full Name: " << fullName << endl;
    cout << "Alias: " << alias << endl;
    cout << "Favorite Meal: " << favoriteMeal << endl;
    cout << "Favorite Movie: " << favoriteMovie << endl;
    cout << "Reason for Taking This Class: " << reason << endl;

    return 0;
}
