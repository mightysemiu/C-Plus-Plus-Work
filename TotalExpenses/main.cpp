#include <iostream>

using namespace std;

int main()
{
    int qty;
    double price, discount, totalExpenses = 0;

    cout << "Enter item quantity: ";
    cin >> qty;
    cout << "Enter item price: ";
    cin >> price;
    discount = qty * price * 0.1;
    totalExpenses = qty * price;

    if(totalExpenses < 5000){
        cout << "Total Expenses is: " << totalExpenses;
    }
    else{
            cout << "Total Expenses is: " << totalExpenses - discount;
    }
    return 0;
}
