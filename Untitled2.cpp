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

    int smallest = a;
    if (b < smallest) smallest = b;
    if (c < smallest) smallest = c;
    if (d < smallest) smallest = d;
    if (e < smallest) smallest = e;

    int second_smallest;
    if (a == smallest)
        second_smallest = (b <= c && b <= d && b <= e) ? b : (c <= d && c <= e) ? c : (d <= e) ? d : e;
    else if (b == smallest)
        second_smallest = (a <= c && a <= d && a <= e) ? a : (c <= d && c <= e) ? c : (d <= e) ? d : e;
    else if (c == smallest)
        second_smallest = (a <= b && a <= d && a <= e) ? a : (b <= d && b <= e) ? b : (d <= e) ? d : e;
    else if (d == smallest)
        second_smallest = (a <= b && a <= c && a <= e) ? a : (b <= c && b <= e) ? b : (c <= e) ? c : e;
    else
        second_smallest = (a <= b && a <= c && a <= d) ? a : (b <= c && b <= d) ? b : (c <= d) ? c : d;

    cout << "The 2nd smallest number is: " << second_smallest << endl;

    return 0;
}


