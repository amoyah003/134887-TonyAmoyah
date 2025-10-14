#include <iostream>
using namespace std;

int main () 
{
    int number;
    cout << "Enter a number: ";
    cin >> number; // Wait for user input before closing
    cout << "You entered: " << number << endl;
    cerr << "This is an example of an error message." << endl;
    return 0;
}