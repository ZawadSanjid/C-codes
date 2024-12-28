#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char password[50]= "Mubassira";
    char check[50];

    cout<<"Enter your password: ";
    cin>>check;

    if (strcmp(password, check) == 0){
    cout<<"Correct password"<<endl;

    }

    else
    {
        cout<<"Wrong pasword";
    }
}
