#include <iostream>
using namespace std;

const int MAX_ROWS = 10;
const int MAX_COLS = 10;

void printMat(int mat[][MAX_COLS], int rows, int cols) {
    cout << "<Matrix>" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
}

void inputMat(int mat[][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat[i][j];
        }
    }
}

void multiplyMatrices(int A[][MAX_COLS], int r1, int c1, int B[][MAX_COLS], int r2, int c2) {
    if (c1 != r2) {
        cout << "Matrices are not suitable for multiplication" << endl;
        return;
    }

    int mult[MAX_ROWS][MAX_COLS] = {};
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                mult[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printMat(mult, r1, c2);
}

int main() {
    int r1, c1, r2, c2;
    cout << "Enter no. of rows & cols for matrix 1: ";
    cin >> r1 >> c1;
    cout << "Enter no. of rows & cols for matrix 2: ";
    cin >> r2 >> c2;

    int A[MAX_ROWS][MAX_COLS], B[MAX_ROWS][MAX_COLS];

    if (c1 != r2) {
        cout << "Matrices are not suitable for multiplication" << endl;
        return 0;
    }

    cout << "Enter elements of Matrix 1 below: " << endl;
    inputMat(A, r1, c1);
    cout << "Enter elements of Matrix 2 below: " << endl;
    inputMat(B, r2, c2);

    multiplyMatrices(A, r1, c1, B, r2, c2);

    return 0;
}
