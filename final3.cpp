#include <iostream>
#include <string.h>
using namespace std;
int main() {

     char password[] = "adminPass123";
    char Input[100];


    cout << "Enter your password: ";
    cin>>Input;


    if (strcmp(Input, password) == 0) {
        cout << "Login successful" << endl;
    } else {
        cout << "Incorrect password, try again" << endl;
    }

    return 0;
}
