#include <iostream>
using namespace std;

int main() {
    int num_terms, first_term = 0, second_term = 1, next_term;

    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> num_terms;
    cout << "Fibonacci series up to " << num_terms << " terms:" << endl;
    cout << first_term << ", " << second_term;

    for (int i = 2; i < num_terms; ++i) {
        next_term = first_term + second_term;
        cout << ", " << next_term;
        first_term = second_term;
        second_term = next_term;
    }
    cout << endl;
    return 0;
}
