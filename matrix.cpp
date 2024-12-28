#include<iostream>
using namespace std;
int main()
{
    int a[2][2];
    int sumrow=0;
    int sumcol=0;

    for (int i=0;i<2;i++){
    for (int j=0;j<2;j++)
    {
        cout<<"Enter matrix: "<<endl;
        cin>>a[i][j];
    }

    }
    for (int i=0;i<2;i++){
    for (int j=0;j<2;j++){

      sumrow= sumrow+a[i][j];
        sumcol= sumcol+a[i][j];}


    }

    for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
        cout<<"Sum of row: "<<i+1<<sumrow<<endl;}
    }
     for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
        cout<<"Sum of col: "<<j+1<<sumrow<<endl;}
    }


}
