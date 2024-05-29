#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Enter elements below: " << endl;
    int arr[3][3] {};
    for (size_t i = 0; i < 3; i++) {
        for (size_t j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    for (size_t i = 0; i < 3; i++) {
        for (size_t j = 0; j < 3; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    // let's sum
    int sum = 0;
    for (size_t i = 0; i < 3; i++) {
        for (size_t j = 0; j < 3; j++) {
            sum += arr[i][j];
        }
    }

    cout << "The sum of given 2d array is " << sum << endl;
    
    return 0;
}
