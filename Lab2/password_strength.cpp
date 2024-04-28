#include <iostream>
#include <string>
using namespace std;

bool isUppercase(char ch) {
    return (ch >= 'A' && ch <= 'Z');
}

bool isLowercase(char ch) {
    return (ch >= 'a' && ch <= 'z');
}

bool isDigit(char ch) {
    return (ch >= '0' && ch <= '9');
}

bool isSpecial(char ch) {
    // Assuming special characters are non-alphanumeric
    return !(isUppercase(ch) || isLowercase(ch) || isDigit(ch));
}

bool isPasswordStrong(const string password) {
    int length = size(password);
    bool hasUppercase = false, hasLowercase = false, hasDigit = false, hasSpecial = false;

    if (length < 8) return false;

    for (int i = 0; i < length; ++i) {
        if (isUppercase(password[i])) hasUppercase = true;
        else if (isLowercase(password[i])) hasLowercase = true;
        else if (isDigit(password[i])) hasDigit = true;
        else if (isSpecial(password[i])) hasSpecial = true;
    }

    return (hasUppercase && hasLowercase && hasDigit && hasSpecial);
}

int main() {
    string password;
    cout << "Enter your password: ";
    cin >> password;

    if (isPasswordStrong(password)) {
        cout << "Password is strong." << endl;
    } else {
        cout << "Password is weak. Make sure it contains at least 8 characters, one uppercase letter, one lowercase letter, one digit, and one special character." << endl;
    }

    return 0;
}
