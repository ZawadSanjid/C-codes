#include<iostream>
using namespace std;
int main()
{
    int a=70;
    cout<<&a<<endl;
    int *ptr=&a;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    *ptr=100;
    cout<<"a: "<<a;
}
