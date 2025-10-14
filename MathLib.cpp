// This program demonstrates basic math functions in C++.
#include <iostream>
#include <cmath>

using namespace std;

int main () 
{
// variable declaration
  int a = -10, b = 20, c = 4;
  double x = 5.5, y = 2.2;
  cout << "The absolute value of " << a << " is " << abs(a)<< endl;

// Square root
  cout << "The square root of " << c << " is " << sqrt(c) << endl;

  // Raising to power of 3
cout << x << " raised to the power of " << y << " is " << pow(x, y) << endl;

  // The logarithm of a number
  cout << "The natural logarithm of " << x << " is " << log(x) << endl;

    return 0;
}
