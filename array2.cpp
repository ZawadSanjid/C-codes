#include<iostream>
using namespace std;
int main(){
 int a[2][2];
    int b[2][2];
    int multiplication[2][2];


    cout << "Enter Your Elements for Mat1: ";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> a[i][j];
        }
    }

     cout << "Enter Your Elements for Mat2: ";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> b[i][j];
        }
    }
      for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            {
            multiplication[i][j]= a[i][j]*b[i][j];
        }
    }

    cout<<"multiplication of two arr is: "<<endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
        {
            cout<<"multiplication of two array is: ["<<i<<"] ["<<j<<"]"<<a[i][j]*b[i][j]<<endl;      }}

    return 0;

}
