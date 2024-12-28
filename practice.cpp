#include <iostream>
using namespace std;

int main()
{
   int Age[10],total_age,age;
   float avg_age

   for( int i=1;i<=10;i++)
    {cout<<"Age of student"<<i<<":"<<endl;
    cin>>age;
    total_age= total_age+age;}

    cout<<"Total age is: "<<total_age<<endl;

    float avg_age=total_age/10;
    cout<<"Average age is: "<<avg_age<<endl;

     if(avg_age%2==0)
    {
        cout<<"age is even"<<endl;
    }
    else{
        cout<<"age is odd"<<endl;
    }




    return 0;
}





