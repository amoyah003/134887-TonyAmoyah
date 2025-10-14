#include <iostream>
using namespace std;

// create a namespace called MyNameSpace
namespace MyNameSpace {
    int myVariable = 10;
    void myFunction() {
        cout << "Hello from MyNameSpace!" << endl;
    }
}
int main() {
    // Accessing members of MyNameSpace
    cout << "Variable from MyNameSpace: " << MyNameSpace::myVariable << endl;
   
    // Accessing function from MyNameSpace
    MyNameSpace::myFunction();
    return 0;
}