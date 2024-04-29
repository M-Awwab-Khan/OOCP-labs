#include <iostream>
using namespace std;

int main() {
    int dayNumber;

    cout << "Enter the day number: ";
    cin >> dayNumber;

    if (dayNumber >= 1 && dayNumber <= 7) {
        switch (dayNumber) {
            case 1:
                cout << "Monday\n";
                break;
            case 2:
                cout << "Tuesday\n";
                break;
            case 3:
                cout << "Wednesday\n";
                break;
            case 4:
                cout << "Thursday\n";
                break;
            case 5:
                cout << "Friday\n";
                break;
            case 6:
                cout << "Saturday\n";
                break;
            case 7:
                cout << "Sunday\n";
                break;
        }
    } else {
        cout << "Invalid day number. Please enter a number between 1 and 7.\n";
    }
    return 0;
}
