
#include <iostream>
using namespace std;

int main() {
    float element[2][4];

    cout << "Enter the numbers:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << "Enter element at row " << i+1 << " column " << j+1 << ": ";
            cin >> element[i][j];
        }
    }

    float largest_element = element[0][0];
    for (int j = 1; j < 4; ++j) {
        if (element[0][j] > largest_element) {
            largest_element = element[0][j];
        }
    }


    float smallest_Element = element[1][0];
    for (int j = 1; j < 4; ++j) {
        if (element[1][j] < smallest_Element) {
            smallest_Element = element[1][j];
        }
    }


    float result = largest_element * smallest_Element;

    cout << "Largest element in the first row: " << largest_element << endl;
    cout << "Smallest element in the second row: " << smallest_Element << endl;
    cout << "Multiplication result: " << result << endl;

    return 0;
}
