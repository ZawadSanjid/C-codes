#include<iostream>
using namespace std;

class student

{
    public:

    string address,phone_no;
    int roll_no;

};


int main()
{
   student student1;
   student student2;

   student1.address= "Dhanmondi 28";
   student1.roll_no=2;
   student1.phone_no="01935834507";

   cout<<"Sam's info: "<<endl;
   cout<<"address: "<<student1.address<<endl;
   cout<<"roll_no: "<<student1.roll_no<<endl;
   cout<<"phone_no: "<<student1.phone_no<<endl;

   student2.address= "uttara sector-10";
   student2.roll_no=1;
   student2.phone_no="01516548475";

   cout<<"john's info: "<<endl;
   cout<<"address: "<<student2.address<<endl;
   cout<<"roll_no: "<<student2.roll_no<<endl;
   cout<<"phone_no: "<<student2.phone_no<<endl;




   }
