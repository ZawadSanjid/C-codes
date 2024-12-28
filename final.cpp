#include <iostream>
#include <string.h>
using namespace std;
int main() {
    char username[10];


    cout << "Enter your username: ";
    cin>>username;


     if (strlen(username) <= 10) {
        cout << "Valid username" << endl;
    } else {
        cout << "Username too long" << endl;
    }


    return 0;
}

