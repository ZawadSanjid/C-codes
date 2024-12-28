#include<iostream>
using namespace std;

int main() {
    int i;
    float average_temperature = 0, total_temperature = 0, temperature;

    cout << "Enter the temperature of 5 days:" << endl;

    for (i = 1; i <= 5; i++) {
        cout << "Enter temperature of day " << i << ": ";
        cin >> temperature;
        total_temperature = total_temperature+temperature;
    }

    average_temperature = total_temperature / 5;

    cout << "Average temperature: " << average_temperature << endl;

    return 0;
}
