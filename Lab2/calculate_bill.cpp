#include <iostream>
using namespace std;

int main() {
    int calls;
    double bill = 0.0;

    cout << "Enter the number of calls made in a month: ";
    cin >> calls;

    if (calls <= 100) {
        bill = 200.0;
    } else if (calls <= 150) {
        bill = 200.0 + (calls - 100) * 0.60;
    } else if (calls <= 200) {
        bill = 200.0 + 50 * 0.60 + (calls - 150) * 0.50;
    } else {
        bill = 200.0 + 50 * 0.60 + 50 * 0.50 + (calls - 200) * 0.40;
    }

    cout << "Your monthly telephone bill is: Rs. " << bill << endl;

    return 0;
}
