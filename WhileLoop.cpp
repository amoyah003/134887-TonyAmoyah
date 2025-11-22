#include <iostream>
using namespace std;
int main()
{
    string food;
    char resp;

    cout << "Please enter a food you like: ";
    cin >> food;
    cout << "Do you wish to enter another food? (Y/N): ";
    cin >> resp;

    while (resp != 'N' && resp != 'n')
    {
        cout << "You like " << food << "." << endl;
        cin.ignore();
        cin.clear();
        cout << "Please enter a food you like: ";
        getline(cin, food);

        cout << "Do you wish to enter another food? (Y/N): ";
        cin >> resp;
    
    }
    cout << "You entered N. Thank you for entering your food preferences." << endl;
    return 0;
}