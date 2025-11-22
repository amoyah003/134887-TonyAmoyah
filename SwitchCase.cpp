// simple admissions program using switch-case
#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    string name;
    int category = 0;   // we'll map the age range to a category

    cout << "Welcome to the School Admission Portal" << endl;
    cout << "Please Enter the name: ";
    getline(cin, name);
    cout << "Please Enter the age: ";
    cin >> age;

    // map age to a category number
    if (age >= 7 && age < 16)
        category = 1;   // Grade School
    else if (age >= 5 && age <= 6)
        category = 2;   // Kindergarten
    else if (age >= 3 && age <= 4)
        category = 3;   // Preschool
    else if (age >= 1 && age <= 2)
        category = 4;   // Play Group
    else
        category = 0;   // Not eligible

    // now use switch-case
    switch (category) {
        case 1:
            cout << "Congratulations!" << endl;
            cout << name << " is admitted to the Grade School" << endl;
            break;

        case 2:
            cout << "Congratulations!" << endl;
            cout << name << " is admitted to the Kindergarten" << endl;
            break;

        case 3:
            cout << "Congratulations!" << endl;
            cout << name << " is admitted to the Preschool" << endl;
            break;

        case 4:
            cout << "Congratulations!" << endl;
            cout << name << " is admitted to the Play Group" << endl;
            break;

        default:
            cout << "Sorry, " << name << " does not meet the age requirements for admission." << endl;
            break;
    }

    return 0;
}
