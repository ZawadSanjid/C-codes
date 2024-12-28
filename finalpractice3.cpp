#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int bredth;

public:

    void display(int a, int b)
    {
        length=a;
        bredth=b;
    }
    int area()
    {
        return length*bredth;
    }

};

int main()
{
    Rectangle rectangle1;
    Rectangle rectangle2;

    rectangle1.display(4,5);
    rectangle2.display(5,8);

    cout<<"Area of rectangle 1 is: "<<rectangle1.area()<<endl;
    cout<<"Area of rectangle 2 is: "<<rectangle2.area()<<endl;

    }
