#include <iostream>
#include <string.h>
using namespace std;

int main() {

    char input[1][20];

    cout << "Enter a word or number: ";
    cin >> input[0];

    int length = strlen(input[0]);
    for (int i = 0, j = length - 1; i < j; ++i, --j) {
        if (input[0][i] != input[0][j]) {
            cout << "The input is not a palindrome";
            return 0;
        }
    }

    cout << "The input is a palindrome";

    return 0;
}
