#include <iostream>
using namespace std;

int main() {
    int lines {};
    cin >> lines;

    for (int i = 1; i <= lines; i++) {
        for (int space = 5; space >= 0; space--) {
            cout << " ";
        }
        for (int star = 1; star <= 10; star += 2){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}