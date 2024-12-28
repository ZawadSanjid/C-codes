#include<iostream>
using namespace std;
int main()
{

int h,b,r,number;

float area,area2;

    cout<<"enter a number : "<<endl;
    cin>>number;

switch (number){


case 1:

    cout<<"enter the height: "<<endl;
    cin>>h;
    cout<<"enter the base: "<<endl;
    cin>>b;
    area=(0.5*h*b);
    cout<<"The Triangle's area is: "<<area<<endl;

    break;

 case 2:

    cout<<"enter the redius: "<<endl;
    cin>>r;
    area2=(3.1416*r*r);
    cout<<"The circle's area is: "<<area2<<endl;
    break;
}

return 0;}
