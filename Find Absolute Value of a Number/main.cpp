#include <iostream>

using namespace std;

int main()
{
    double number;
    cout << "Enter a number: ";
    cin >> number;
    if(number > 0)
    {
        cout << number << " is the Absolute number";
    }
    else{
        cout << -(number) << " is the Absolute number";
    }

    return 0;
}
