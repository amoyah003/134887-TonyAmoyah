#include <iostream>
#include <string>
using namespace std;
    
int main() {
    int age;
    cout << "Enter the age of the child: ";
    cin >> age;
    // Ternary operator to determine admission status
    string message = (age >= 4) ? "Admitted to school." : "Declined: Not admitted to school.";
    cout << message << endl;
    return 0;
}
