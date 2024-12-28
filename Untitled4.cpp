
#include<iostream>
using namespace std;
int main()
{
    int a[3][7], b[3][7], addition[3][7], subtraction[3][7], multiplication[3][7];
    cout << "Enter values for array a:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 7; ++j) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }
    cout << "Enter values for array b:" << endl;
    for (int i= 0; i< 3; ++i) {
        for (int j= 0; j< 7; ++j) {
         cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j< 7; ++j) {
            addition[i][j] = a[i][j] + b[i][j];
        }
    }
cout << "Addition Result:" << endl;
   for (int i = 0; i < 3; ++i) {
        for (int j = 0; j< 7; ++j) {
            cout << addition[i][j] << " ";
        }
        cout << endl;
    }
 for (int i = 0; i < 3; ++i) {
        for (int j = 0; j< 7; ++j) {
            subtraction[i][j] = a[i][j] - b[i][j];
        }
    }
cout << "Subtraction Result:" << endl;
   for (int i = 0; i < 3; ++i) {
        for (int j = 0; j< 7; ++j) {
            cout << subtraction[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j< 7; ++j) {
            multiplication[i][j] = a[i][j] * b[i][j];
        }
    }
cout << "Multiplication Result:" << endl;
   for (int i = 0; i < 3; ++i) {
        for (int j = 0; j< 7; ++j) {
            cout << multiplication[i][j] << " ";
        }
        cout << endl;}

    return 0;}
