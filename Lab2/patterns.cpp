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


int main() {

    diamond();

    return 0;
}