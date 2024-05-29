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
    bool is_symmetric = true;
    if (rows == cols) {
        for (size_t i = 0; i < rows; i++) {
            for (size_t j = 0; j < cols; j++) {
                if (arr[i][j] != arr[j][i]) {
                    is_symmetric = false;
                }
            }
        }
    } else {
        is_symmetric = false;
    }

    if (not is_symmetric) {
        cout << "Given array is not symmetric" << endl;
    } else {
        cout << "The array is symmetric!" << endl;
    }

    
    return 0;
}
