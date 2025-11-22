// simple admissions program to admit student to different learning levels.
#include <iostream>
#include <string>
using namespace std;

int  main () {
    int  age;
    string name;
    cout << "Welcome to the School Admission Portal" << endl;
    cout << "Please Enter the name: ";
    getline (cin, name);
    cout << "Please Enter the age: ";
    cin >> age;
    if (age >= 7 && age < 16)
    {
        cout <<  "Congratulations!" << endl;
        cout << name << " is admitted to the Grade School" << endl;
    } 
    else if (age >= 5 && age <= 6)
    {
        cout <<  "Congratulations!" << endl;
        cout << name << " is admitted to the Kindergarten" << endl;
    }
    else if (age >= 3 && age <= 4)
    {
        cout <<  "Congratulations!" << endl;
        cout << name << " is admitted to the Preschool" << endl;
    }
    else if (age >= 1 && age <= 2)
    {
        cout <<  "Congratulations!" << endl;
        cout << name << " is admitted to the Play Group" << endl;
    }
    else 
    {
        cout << "Sorry, " << name << " does not meet the age requirements for admission." << endl;
    }
    return 0;
}
