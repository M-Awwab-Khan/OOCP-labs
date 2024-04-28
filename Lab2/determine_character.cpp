#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        if (ch >= 'A' && ch <= 'Z')
            cout << "The character is a capital letter." << endl;
        else
            cout << "The character is a small case letter." << endl;
    } else if (ch >= '0' && ch <= '9') {
        cout << "The character is a digit." << endl;
    } else {
        cout << "The character is a special symbol." << endl;
    }

    return 0;
}
