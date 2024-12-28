#include<iostream>
using namespace std;
int main(){

string a[2][2];

for(int i=0;i<2;i++)
{
    for (int j=0;j<2;j++)
    {
        cout<<"enter name and cgpa: ";
        cin>>a[i][j];
    }
}
for(int i=0;i<2;i++)
{
    for (int j=0;j<2;j++)
    {
        cout<<"Eelements["<<i<<"] ["<<j<<"]"<<a[i][j]<<endl;;

    }
}
return 0;
}
