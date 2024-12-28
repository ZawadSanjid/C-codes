#include <iostream>
#include <string.h>
using namespace std;
int main(){
 char a[] = "Welcome to ChatApp!";
 char b[100];

    strcpy(b,a);


    cout << "Copied message: " << b << endl;

    return 0;
}
