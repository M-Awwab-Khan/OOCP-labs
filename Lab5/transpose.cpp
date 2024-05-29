#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int rows {}, cols {};
    cout << "Enter no. of rows: " ;
    cin >> rows;
    cout << "Enter no. of cols: ";
    cin >> cols;
    cout << "Enter elements below: " << endl;
    int arr[rows][cols] {};
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }
    cout << "Given Array: " << endl;
    // printing
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "The transpose of given 2d array is " << endl;
    // let's transpose
    for (size_t i = 0; i < cols; i++) {
        for (size_t j = 0; j < rows; j++) {
            cout << arr[j][i] << "\t";
        }
        cout << endl;
    }

    
    return 0;
}
