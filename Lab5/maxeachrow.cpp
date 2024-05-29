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
    
    for (int i = 0; i < rows; i++) {
        int mx {arr[i][0]};
        for ( int j = 0; j < cols; j++) {
            if (arr[i][j] > mx) {
                mx = arr[i][j];
            }
        }
        cout << "Max of row " << i + 1 << " is " << mx << endl;
    }
    return 0;
}
