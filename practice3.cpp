

#include<iostream>
using namespace std;
int main()
{
    int m,n;
    int a[m][n];
    int b[m][n];
    int multiplication[m][n];


    cout<<"Enter row: "<<endl;
    cin>>m;
    cout<<"Enter col: "<<endl;
    cin>>n;


    cout<<"Enter matrix 1: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }


       cout<<"Enter matrix 2: "<<endl;
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        {
            cin>>b[i][j];
        }
    }

         cout<<"multiplicaion of matrix : "<<endl;
         for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        {
           multiplication[i][j]= a[i][j]*b[i][j];
           cout<<multiplication[i][j]<<" ";

        }
    }
cout<<endl;

}
