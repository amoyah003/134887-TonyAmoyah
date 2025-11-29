#include <iostream>
using namespace std;

int main() {
int nums[6];
// Prompt a User to enter values stored in an array
 /* cout << "Enter 6 numbers: " << endl;
  cin >> nums[0];
  cin >> nums[1];       
  cin >> nums[2];
  cin >> nums[3];
  cin >> nums[4];
  cin >> nums[5];

// Display the values stored in the array
  cout << " You entered the following values: " << endl;
// cin >> nums[0],nums[0], nums[1], nums[2], nums[3], nums[4], nums[5];
    cout << nums[0] << ",";
    cout << nums[1] << ",";
    cout << nums[2] << ",";
    cout << nums[3] << ",";
    cout << nums[4] << ",";
    cout << nums[5] << endl;*/

    cout << "Enter 6 numbers: " << endl;
    for (int index = 0; index <=5; index++)
     {
        cin >> nums[index];
     }

    cout << " You entered the following values: " << endl;
    for (int index = 0; index <=5; index++)
     {
        cout << nums[index] << ",";
     }
    cout << "\b " << " "; // To remove the last comma and space
}

    