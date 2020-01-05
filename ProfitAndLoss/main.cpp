#include <iostream>

using namespace std;

/**
* Write a program to determine whether the seller has made profit or incurred loss.
* Also determine how much profit he made or loss he incurred.
* Cost price and selling price of an item is input by the user
*/

int main()
{
    double costPrice, sellPrice = 0;

    cout << "Enter your cost price: ";
    cin >> costPrice;
    cout << "Enter your selling price: ";
    cin >> sellPrice;

    if(costPrice > sellPrice)
    {
        cout << "You made a Loss of : " << sellPrice - costPrice;
    }
    else if(costPrice == sellPrice)
    {
        cout << "You made no Profit nor Loss.";
    }
    else{
        cout << "You made a Profit of : " << sellPrice - costPrice;
    }
	cin.ignore();
	cin.get();
    return 0;
}
