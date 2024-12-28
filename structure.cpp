#include<iostream>
using namespace std;

struct studentinfo
{
    string name;
    float cgpa;
    int course_load;
    string semester_name;
};

int main()
{
    studentinfo student1;
    studentinfo student2;
    cout<<"Enter name: "<<endl;
    cin>>student1.name;
    cout<<"Enter cgpa: "<<endl;
    cin>>student1.cgpa;
    cout<<"Enter course load: "<<endl;
    cin>>student1.course_load;
    cout<<"Enter semester name: "<<endl;
    cin>>student1.semester_name;

    cout<<"student 1 info"<<endl;
    cout<<student1.name<<endl;
    cout<<student1.cgpa<<endl;
    cout<<student1.course_load<<endl;
    cout<<student1.semester_name<<endl;

    cout<<"Enter name: "<<endl;
    cin>>student2.name;
    cout<<"Enter cgpa: "<<endl;
    cin>>student2.cgpa;
    cout<<"Enter course load: "<<endl;
    cin>>student2.course_load;
    cout<<"Enter semester name: "<<endl;
    cin>>student2.semester_name;

    cout<<"student 2 info"<<endl;
    cout<<student2.name<<endl;
    cout<<student2.cgpa<<endl;
    cout<<student2.course_load<<endl;
    cout<<student2.semester_name<<endl;
}
