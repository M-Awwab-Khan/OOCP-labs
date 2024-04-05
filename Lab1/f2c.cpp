#include <iostream>

using namespace std;

int main() {
    double fahrenheit {}, celsius {};

    cout << "Enter the temperature in Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5 / 9;
    cout << "Temperature in Celsius: " << celsius << endl;

    return 0;
}

