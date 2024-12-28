#include<iostream>
using namespace std;
void BMI(float &height, float &weight);
void BMI(float &height, float &weight) {
    double BMI = weight / (height * height);

    cout << "Your BMI is: " << BMI << endl;
    if (BMI < 18.5) {
        cout << "Your weight is Underweight!" << endl;
    }
    else if (BMI >= 18.5 && BMI < 25) {
        cout << "Your weight is Normal weight!" << endl;
    }
    else if (BMI >= 25 && BMI < 30) {
        cout << "Your weight is Overweight!" << endl;
    }
    else {
        cout << "Obese" << endl;
    }
}
int main() {
    float height, weight;

    cout << "Enter your weight in kilograms(KG): ";
    cin >> weight;
    cout << "Enter your height in meters(M): ";
    cin >> height;
    BMI(height,weight);
    return 0;
}








