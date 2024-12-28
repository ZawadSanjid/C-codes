#include<iostream>
using namespace std;
int main()
{
    int a[2][3],addition[2][3],substraction[2][3],multiplication[2][3] ;
    int b[2][3];
    float sum;
    cout<<"a"<<endl;
    for (int i=0;i<2;i++)

    {
       for (int j=0;j<3;j++)
    {
        cin>>a[i][j];
    }}

    cout<<"b"<<endl;
    for (int i=0;i<2;i++)
    {
       for (int j=0;j<3;j++)
    {
        cin>>b[i][j];

    }}
       cout << "Addition Result:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            addition[i][j] = a[i][j] + b[i][j];
            cout << addition[i][j] << " ";
        }
        cout << endl;
    }
       cout << "substraction Result:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            substraction[i][j] = a[i][j] - b[i][j];
            cout << substraction[i][j] << " ";
        }
        cout << endl;}

    cout << "Multiplication Result:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            multiplication[i][j] = a[i][j] * b[i][j];
            cout << multiplication[i][j] << " ";
        }
        cout << endl;}

}


