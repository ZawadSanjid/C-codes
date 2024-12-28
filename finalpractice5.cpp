#include <iostream>
using namespace std;

// Define a structure to represent a student
struct Student {
    string name;
    int age;
};

int main() {
    // Declare an array of 6 Student structures
    Student students[6];

    // Input details for each student
    for (int i = 0; i < 6; ++i) {
        cout << "Enter name of student " << i+1 << ": ";
        cin >> students[i].name;
        cout << "Enter age of student " << i+1 << ": ";
        cin >> students[i].age;
    }

    // Print details of each student
    cout << "\nDetails of students:" << endl;
    for (int i = 0; i <6; ++i) {
        cout << "Student " << i+1 << ":" << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Age: " << students[i].age << endl;
        cout << endl;
    }

    return 0;
}

