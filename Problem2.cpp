#include <iostream>
using namespace std;

int main() {
    float total_classes, attended_classes,attendance_percentage;


    cout << "Enter the total number of classes held: ";
    cin >> total_classes;
    cout << "Enter the number of classes attended by the student: ";
    cin >> attended_classes;

    attendance_percentage=((attended_classes) / total_classes)*100;


    if (attendance_percentage >= 80) {
        cout << "Attendance Percentage: " << attendance_percentage <<endl;
        cout << "The student is allowed to sit for the exam"<<endl;}
     else
       {
        cout << "Attendance Percentage: " << attendance_percentage <<endl;
        cout << "The student is not allowed to sit for the exam due to low attendance"<<endl;
    }

    return 0;
}

