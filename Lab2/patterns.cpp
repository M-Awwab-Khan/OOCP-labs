#include <iostream>
#include <string>
using namespace std;

const string red_font = "\033[31m";
const string white_font = "\033[0m";

void diamond() {
    for (int i = 1; i <= 4; i++) {
        if (i==1) {cout << red_font << string((5-i), ' ') + string(2*i - 1, '*') << endl;}
        else {cout << white_font << string((5-i), ' ') + string(2*i - 1, '*') << endl;}
    }

    cout << string(9, '*') << endl;

    for (int i = 4; i >= 1; i--) {
        if (i==1) {cout << red_font << string((5-i), ' ') + string(2*i - 1, '*') << endl;}
        else {cout << white_font << string((5-i), ' ') + string(2*i - 1, '*') << endl;}
    }

    cout << white_font;
}

void rectangle () {
    for (size_t i = 1; i <= 9; i++)
    {
        if (i == 1 or i == 9) {
            cout << string(5, '*') << endl;
        } else if (i % 2 != 0) {
            cout << red_font << "*" << string(3, ' ') << white_font << "*" << endl;
        } else {
            cout << endl;
        }
    }
}

void number_pyramid() {
    string prev = "1";
    for (int i = 1; i <= 4; i++) {
        cout << string((5-i), ' ') + prev << endl;
        prev.push_back(to_string(i+1));
        prev.insert(0, to_string(i+1));
    }
}

int main() {

    // diamond();
    // rectangle();
    number_pyramid();
    

    return 0;
}