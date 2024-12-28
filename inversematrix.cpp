
#include<iostream>
using namespace std;
int main()
{

    int A[3][2];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<"Enter the value for element ["<<i<<"]["<<j<<"]:";
            cin>> A[i][j];
        }
    }
    cout<<"Matrix:"<<endl;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<"Transpose matrix: "<<endl;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<A[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;

    }
