#include<iostream>
using namespace std;
class student
{
private:
    string name,id;
    float cgpa;

public:
    void setdetails(string a,string b,float c)
    {
        name=a;
        id=b;
        cgpa=c;
    }
    void getdetails()
    {
        cout<<name<<endl;
        cout<<id<<endl;
        cout<<cgpa<<endl;
    }
};
int main()
{
    student a;
    a.setdetails("zawad","56473",3.58);
    a.getdetails();
}
