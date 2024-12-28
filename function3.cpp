#include<iostream>
using namespace std;
void func (int v[],int z)
{
   for(int i=0; i<z; i++)
   {
       v[i]=v[i]*2;
   }
}
int main()
{
    int a[3]={};
    cout<<"before"<<endl;
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
        //cout<<a[i]<<" ";

    }
    //cout<<a[i]<<" ";
    func(a,3);
    cout<<"after"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<a[i]<<" ";
    }

}
