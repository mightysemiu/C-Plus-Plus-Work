#include <iostream>

using namespace std;
/**< Any integer is input by the user. Write a program to find out whether it is an odd number or even number. */
int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if(number % 2 == 0){
        cout << number << " entered is an Even number";
    }
    else{
        cout << number << " entered is an Odd number";
    }
    return 0;
}
