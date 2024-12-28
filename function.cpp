#include<iostream>
using namespace std;

void sum()
{
    int a,b,sum=0;

    cout<<"Enter number 1:"<<endl;
    cin>>a;
    cout<<"Enter number 2:"<<endl;
    cin>>b;

    sum=a+b;
    cout<<"sum: "<<sum<<endl;
}
void sub()
{
    int a,b,sub=0;

    cout<<"Enter number 1:"<<endl;
    cin>>a;
    cout<<"Enter number 2:"<<endl;
    cin>>b;

    sub=a-b;
    cout<<"sub: "<<sub<<endl;
}

int main()
{
    sum();
    cout<<endl;
    sub();

}
