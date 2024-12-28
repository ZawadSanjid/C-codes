#include<iostream>
using namespace std;
int main()
{

    int row,coloumn;

    cout<<"enter the row: "<<endl;
    cin>>row;
    cout<<"enter the coloumn: "<<endl;
    cin>>coloumn;

float a[row][coloumn],sum,average;
    for(int i=0;i<row;i++)

    {for(int j=0;j<coloumn;j++)
      {
          cin>>a[i][j];
          sum=sum+a[i][j];
      }}


    average=sum/(row*coloumn);
    cout<<"summation of numbers: "<<sum<<endl;
    cout<<"average of numbers: "<<average<<endl;


}
