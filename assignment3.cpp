#include <iostream>
using namespace std;

float calculateFine(int overdue, char category) {
    float fine,totalfine;
    switch (category) {
        case 'R':
            fine = overdue * 1.0;  // Regular book fine: $1/day
            break;
        case 'F':
            fine = overdue * 1.5;  // Fiction book fine: $1.5/day
            break;
        case 'P':
            fine = overdue * 2.0;  // Reference book fine: $2/day
            break;

    }
    totalfine += fine;
}

int main() {
    int total_books= 10;
    int books;

    cout << "Enter the total number of overdue books: ";
    cin >> books;

    if (books > total_books) {
        cout << "Sorry, invalid entry" << endl;

    }

    else{

    float total_fine;

    for (int i = 0; i < books; ++i) {
        int overdue;
        char category;

        cout << "Enter the number of days overdue for book " << i+1 << ": ";
        cin >> overdue;
        cout << "Enter the category of book " << i+1 << " (R for Regular, F for Fiction, P for Reference): ";
        cin >> category;

        total_fine += calculateFine(overdue, category);  // Add fine for current book to total
    }


    cout << "Total fine for all overdue books: $" << total_fine << endl;}

    return 0;
}
