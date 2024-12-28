#include <iostream>

using namespace std;

int main() {
    int numitems,quantity;
    float total_cost=0,price;

    cout << "Enter the number of items in the shopping cart: ";
    cin >> numitems;


    for (int i = 0; i < numitems; i++) {


        cout << "Enter the price of item " << i + 1 << ": ";
        cin >> price;
        cout << "Enter the quantity of item " << i + 1 << ": ";
        cin >> quantity;

        total_cost= total_cost+price * quantity;
    }

    cout << "The total cost of the items in the shopping cart is: "<< total_cost << endl;

    return 0;
}

