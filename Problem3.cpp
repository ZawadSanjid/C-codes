#include <iostream>
using namespace std;

int main() {

    int child_price = 120,adult_price = 250,senior_price = 200;
    char day;


    cout << "Enter the day of the week (S for Sunday, M for Monday, T for Tuesday): ";
    cin >> day;

    switch (day) {
        case 'S':
            cout << "Regular prices apply on Sundays." << endl;
            cout << "Children's ticket: $" << child_price << endl;
            cout << "Adult ticket: $" << adult_price << endl;
            cout << "Senior citizen ticket: $" << senior_price << endl;
            break;
        case 'M':
            cout << "Discounts on Mondays:" << endl;
            cout << "Children's ticket: $" << child_price - 10 << endl;
            cout << "Adult ticket: $" << adult_price - 15 << endl;
            cout << "Senior citizen ticket: $" << senior_price - 15 << endl;
            break;
        case 'T':
            cout << "Even bigger discounts on Tuesdays:" << endl;
            cout << "Children's ticket: $" << child_price - 20 << endl;
            cout << "Adult ticket: $" << adult_price - 20 << endl;
            cout << "Senior citizen ticket: $" << senior_price - 20 << endl;
            break;
        default:
            cout << "Invalid input. Please enter S, M, or T." << endl;
    }

    return 0;
}

