#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age;
    string name;
    char interest;

    cout << "Welcome to the School Admission Portal!" << endl;
    cout << "Enter the full name of the student: ";
    getline(cin, name);
    cout << "Enter the age of the student: ";
    cin >> age;

    if (age >= 4 && age <= 10)
    {
        cout << "Enter the child's interest:\n\tS for Soccer\n\tA for Art\n\tM for Music\n\tC for Athletics\n\tT for Toys\n\tO for Other: ";
        cin >> interest;

        switch (interest)
        {
        case 'S':
        case 's':
            cout << "Congratulations!" << endl;
            cout << name << " Assigned to Soccer Playgroup." << endl;
            break;

        case 'A':
        case 'a':
            cout << "Congratulations!" << endl;
            cout << name << " Assigned to Art Playgroup." << endl;
            break;

        case 'M':
        case 'm':
            cout << "Congratulations!" << endl;
            cout << name << " Assigned to Music Playgroup." << endl;
            break;

        case 'C':
        case 'c':
            cout << "Congratulations!" << endl;
            cout << name << " Assigned to Athletics Playgroup." << endl;
            break;

        case 'T':
        case 't':
            cout << "Congratulations!" << endl;
            cout << name << " Assigned to Toys Playgroup." << endl;
            break;

        case 'O':
        case 'o':
            cout << "Congratulations!" << endl;
            cout << name << " Assigned to General Playgroup." << endl;
            break;

        default:
            cout << "Invalid interest entered." << endl;
        }
    }
    else
    {
        cout << "Sorry, the child does not meet the age requirement." << endl;
    }

    return 0;
}
