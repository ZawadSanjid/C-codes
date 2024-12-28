#include<iostream>
using namespace std;
void b10()
{
    cout<<"     "<<endl;
}

int section()
{
    int a=100;
    cout<<a<<endl;
}
int oddeven(int x)
{
    if(x%2==0)
    {
        cout<<x<<"is even"<<endl;
    }
    else
    {
        cout<<x<<"is odd"<<endl;
    }
}
int main()
{
    section();
    //b10();
    oddeven(3);
    oddeven(4);
    oddeven(1000);
    oddeven(0);
}
