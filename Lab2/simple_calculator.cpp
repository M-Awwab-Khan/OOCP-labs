#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2, result;

    cout << "Simple Calculator Menu:" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> operation;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    switch(operation) {
        case '1':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case '2':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case '3':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case '4':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Invalid choice! Please choose a number between 1 and 4." << endl;
    }
    return 0;
}
