
#include<iostream>
using namespace std;

int main()
{
    int a, b, c, d, e;

    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;
    cout << "Enter the fourth number: ";
    cin >> d;
    cout << "Enter the fifth number: ";
    cin >> e;

    if (a <= b && a <= c && a <= d && a <= e)

        if (b <= c && b <= d && b <= e)
        {
            cout << "The 2nd smallest number is: " << b << endl;
        }
        else if (c <= d && c <= e)
        {
            cout << "The 2nd smallest number is: " << c << endl;
        }
        else if (d <= e)
        {
            cout << "The 2nd smallest number is: " << d << endl;
        }
        else
        {
            cout << "The 2nd smallest number is: " << e << endl;
        }



    return 0;
}






























