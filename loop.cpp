#include <iostream>
using namespace std;
int main()
{
    float amount,t_amount=0;
    cout<<"Enter the amount of 12 months: "<<endl;

    for(int i=1; i<=12; i++)
    {
        cout<<"month"<<i<<" : "<<endl;
        cin>>amount;
    t_amount=t_amount+amount;

    }

    cout<<"Total amount saved in a year: "<<t_amount<<endl;

}











