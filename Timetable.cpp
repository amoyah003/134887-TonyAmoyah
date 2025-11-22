/* A simple C++ application using switch...case for your BBIT Sem 1 (Jan May 2025)
timetable, which shows the student units depending on the day of the week entered  */
#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter a number (1 for Monday, 2 for Tuesday, ..., 7 for Sunday):" << endl;
    cin >> day;
    switch (day)
    {
        case 1:
            cout << "You have the following units on Monday:" << endl;
            cout << "8:15 am-11:15 am BBIT1106: Math for Business \n 12.15 pm-2:15 pm BBIT1102: Introduction to Programming\n";
            break;
        case 2:
            cout << "You have the following units on Tuesday:" << endl;
            cout << "8:15 am-11:15 am BBIT1102: Introduction to Programming \n 12.15 pm-2:15 pm BBIT1104:Introduction to Ethics\n";
            break;
        case 3:
            cout << "You have the following units on Wednesday:" << endl;      
            cout << "8:15 am-11:15 am BBIT1108: Business Communication \n 12.15 pm-2:15 pm BBIT1106: Math for Business\n";
            break;
        case 4:
            cout << "You have the following units on Thursday:" << endl;
            cout << "8:15 am-11:15 am BBIT1104: Introduction to Ethics \n 12.15 pm-2:15 pm BBIT1108: Business Communication\n";
            break;
        case 5:
            cout << "You have the following units on Friday:" << endl;     
            cout << "8:15 am-11:15 am BBIT1105: Business Computing \n";
            break;
            default:
            cout << "No classes scheduled for today. Please enter a valid number (1-5)." << endl;
    }
    return 0;
}