#include<iostream>
using namespace std;

void matrixsum()
{
    int a[2][2];
    int b[2][2];
    int sum[2][2];

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<"Enter The Array Elements MAT 1: ";
            cin>>a[i][j];
        }
    }
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<"Enter The Array Elements MAT 2: ";
            cin>>b[i][j];
        }
    }
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
           sum[i][j]=a[i][j]+b[i][j];
        }
    }
   for(int j=0; j<2; j++)
    {
        for(int i=0; i<2; i++)
        {
            cout<<"SUM ["<<i<<"]["<<j<<"]:"<<sum[i][j]<<endl;
        }
    }
}


void matrixsub()
{
    int a[2][2];
    int b[2][2];
    int sub[2][2];

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<"Enter The Array Elements MAT 1: ";
            cin>>a[i][j];
        }
    }
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<"Enter The Array Elements MAT 2: ";
            cin>>b[i][j];
        }
    }
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
           sub[i][j]=a[i][j]-b[i][j];
        }
    }
   for(int j=0; j<2; j++)
    {
        for(int i=0; i<2; i++)
        {
            cout<<"SUB ["<<i<<"]["<<j<<"]:"<<sub[i][j]<<endl;
        }
    }
}

 void matrixmul()
{
    int a[2][2];
    int b[2][2];
    int mul[2][2];

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<"Enter The Array Elements MAT 1: ";
            cin>>a[i][j];
        }
    }
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<"Enter The Array Elements MAT 2: ";
            cin>>b[i][j];
        }
    }
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
           mul[i][j]=a[i][j]*b[i][j];
        }
    }
   for(int j=0; j<2; j++)
    {
        for(int i=0; i<2; i++)
        {
            cout<<"MUL ["<<i<<"]["<<j<<"]:"<<mul[i][j]<<endl;
        }
    }
}

int main()
{
    int choice;
    cout<<"Enter Your choice: "<<endl;
    cout<<"1. Matrix Sum"<<endl;
    cout<<"2. Matrix Sub"<<endl;
    cout<<"3. Matrix mul"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        matrixsum();
        break;
        case 2:
        matrixsub();
        break;
         case 3:
        matrixmul();
        break;
        default:
        cout<<"Invalid";
    }
    return 0;
}
