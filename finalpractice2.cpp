#include<iostream>
using namespace std;

class Triangle
{
private:
    float side1,side2,side3;

public:
    void display(float a,int b,int c)
    {
        side1=a;
        side2=b;
        side3=c;
    }

    float area()
    {
        return 0.5*side1*side2;

    }
    float perimeter()
    {
       return side1+side2+side3;
    }

};
int main()
{
    Triangle triangle;
    triangle.display(3,4,5);
    cout<<"area: "<<triangle.area()<<endl;
    cout<<"perimeter: "<<triangle.perimeter()<<endl;
}
