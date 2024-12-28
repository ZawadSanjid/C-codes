#include<iostream>
using namespace std;
struct student
{
    string name;
    int load;
    float cgpa;

};
int main()
{
    student b10[3];
    for (int i=0;i<3;i++)
    {
        cout<<"Enter the name of the student: "<<i+1;
        cin>>b10[i].name;
        cout<<"Enter the cgpa of the student: ";
        cin>>b10[i].cgpa;
        cout<<"Enter the load of the student: ";
        cin>>b10[i].load;
    }
}
