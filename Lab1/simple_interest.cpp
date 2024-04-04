#include <iostream>

using namespace std;

int main() {

    float p {};
    float r {};
    float t {};

    cout << "Enter the principal amount: ";
    cin >> p;

    cout << "Enter the rate of interest (in percentage): ";
    cin >> r;
 
    cout << "Enter the time period (in years): ";
    cin >> t;

    float simpleInterest = (p * r * t) / 100;
    cout << "Simple Interest: " << simpleInterest << endl;

    return 0;
}

