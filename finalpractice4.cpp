#include<iostream>
using namespace std;

/*struct studentInfo {
    string name;
    int roll_no;
    int age;

    void details() {

        int student[2];
        for(int i=0;i<2;i++){
        cout << "Enter name of student: "<<endl;
        cin >> name;
        cout << "Enter roll number of student: "<<endl;;
        cin >> roll_no;
        cout << "Enter age of student: "<<endl;
        cin >> age;}
        cout<<endl;
    }
};*/
void ou()
{
    int o;
    int ar[o][o];
    for(int i=0; i<o; i++)
    {

        for (int j=0; j<o ; j++)
        {
            cout<< ar[i][j];
        }
    }
}

int main() {
    /*studentInfo student;
    student.details();
    cout<<"2nd student info: "<<student.name[i-2];*/

    int n ;
    cin>> n ;
    int ar[n][n];
    for(int i=0; i<n; i++)
    {
        for ( int j=0; j<n ; j++)
        {
            cin>> ar[i][j];
        }
    }
    ou();

    return 0;
}
