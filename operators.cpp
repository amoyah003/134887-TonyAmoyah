#include <iostream>
using namespace std;

int main() {
   // variable declaration
   int num1 = 16, num2 = 4;

    // Arithmetic Operators
    cout << "Addition: " << num1 << " + " << num2 << " = " << num1 + num2 << endl; // addition
    cout << "Subtraction: " << num1 << " - " << num2 << " = " << num1 - num2 << endl; // subtraction
    cout << "Multiplication: " << num1 << " * " << num2 << " = " << num1 * num2 << endl; // multiplication
    cout << "Division: " << num1 << " / " << num2 << " = " << num1 / num2 << endl; // division
    cout << "Modulus: " << num1 << " % " << num2 << " = " << num1 % num2 << endl; // modulus
    cout << "Pre-Increment: " << "++" << num1 << " = " << ++num1 << endl; // increment
    cout << "Post-Increment: " << num2 << "++ = " << num2++ << endl; // increment
    cout << "Pre-Decrement: " << "--" << num1 << " = " << --num1 << endl; // decrement
    cout << "Post-Decrement: " << num2 << "-- = " << num2-- << endl; // decrement
    cout << "Combined increment and Assignment: " << "num1 += 2" << " = " << (num1 += 2) << endl; // increment and assignment
    cout << "Combined decrement and Assignment: " << "num2 -= 2" << " = " << (num2 -= 2) << endl; // decrement and assignment
    cout << "Combined Multiply and Assignment: " << "num2 *= 2" << " = " << (num2 *= 2) << endl; // multiply and assignment
    cout << "Combined Divide and Assignment: " << "num1 /= 2" << " = " << (num1 /= 2) << endl; // divide and assignment

    // Comparison/ Logical Operators
    cout << "3>2" << " = " << (3>2) << endl; // greater than
    cout << "3<2" << " = " << (3<2) << endl; // less than
    cout << "4>=3" << " = " << (4>=3) << endl; // greater than or equal to
    cout << "2<=3" << " = " << (2<=3) << endl; // less than or equal to
    cout << "3==3" << " = " << (3==3) << endl; // equal to
    cout << "!(4>=3)" << " = " << !(4>=3) << endl; // not operator

    // Boolean Operators (AND &&)
    cout << "true && true" << " = " << ((3>2) && (4>=3)) << endl; // AND operator
    cout << "true && false" << " = " << ((3>2) && (4<=2)) << endl; // AND operator
    cout << "false && false" << " = " << ((3<2) && (4>=2)) << endl; // AND operator
    cout << "false && true" << " = " << ((3<2) && (4>=3)) << endl; // AND operator 

    // Boolean Operators (OR ||)
    cout << "true || false" << " = " << ((3>2) || (4<=2)) << endl; // OR operator
    cout << "false || false" << " = " << ((3<2) || (4<=2)) << endl; // OR operator
    cout << "true || true" << " = " << ((3>2) || (4>=2)) << endl; // OR operator   
    cout << "false || true" << " = " << ((3<2) || (4>=3)) << endl; // OR operator 




    return 0;
}