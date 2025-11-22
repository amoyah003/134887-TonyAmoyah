#include <iostream>
using namespace std;
int main () {
    int age;
    string interest;
    cout << "Please Enter the age: ";
    cin >> age;

    if (age >= 4 && age <= 10) // Check if age is between 4 and 10 inclusive
     {
        cout << "Enter child's interest: ";
        cin >> interest;
        if (interest == "soccer" || interest == "Soccer" || interest == "SOCCER")
         {
            cout << "Admitted to school" << endl;
            cout << "Assigned to the Soccer Playgroup" << endl;
            return 0;
        }
         if (interest == "art" || interest == "Art" || interest == "ART") 
         {
            cout << "Admitted to school" << endl;
            cout << "Assigned to the Art Playgroup" << endl;
        }
        else 
        {
        cout << "Admitted to school" << endl;
        cout << "Assigned to the other Playgroup" << endl;
        }
    }
    else 
    {
        cout << "Declined: Not admitted to school" << endl;
    }
    return 0;
}

