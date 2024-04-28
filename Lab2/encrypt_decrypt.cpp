#include <iostream>
#include <string>
using namespace std;

string encrypt(string message, int shift) {
    string encrypted {};

    for (char i: message) {
        encrypted += char(int(i) + shift);
    }

    return encrypted;
}

string decrypt(string message, int shift) {

    return encrypt(message, -shift);

}

int main() {
    string message;
    int shift;

    cout << "Enter a message to encrypt: ";
    getline(cin, message);

    cout << "Enter the shift value for encryption: ";
    cin >> shift;

    string encrypted_message = encrypt(message, shift);
    cout << "Encrypted message: " << encrypted_message << endl;

    // Decrypting the encrypted message
    string decrypted_message = decrypt(encrypted_message, shift);
    cout << "Decrypted message: " << decrypted_message << endl;

    return 0;
}