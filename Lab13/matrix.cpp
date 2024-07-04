#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Matrix{
private:
    int numberOfRows;
    int numberOfCols;
    vector<vector<int>> matrix;

public:
    Matrix() {}
    Matrix(int nr, int nc, vector<vector<int>> m) : numberOfRows(nr), numberOfCols(nc), matrix(m) {}

    Matrix operator*(Matrix const &other) {
        if (numberOfCols != other.numberOfRows) {
            cout << "Multiplication not possible" << endl;
            return Matrix();
        }
        vector<vector<int>> resMat(numberOfRows, vector<int>(other.numberOfCols, 0));
        for (int i = 0; i < numberOfRows; ++i) {
            for (int j = 0; j < other.numberOfCols; ++j) {
                for (int k = 0; k < numberOfCols; ++k) {
                    resMat[i][j] += matrix[i][k] * other.matrix[k][j];
                }
            }
        }
        return Matrix(numberOfRows, other.numberOfCols, resMat);
    }

    void printMatrix() {
        for (auto &row : matrix) {
            for (auto &element : row) {
                cout << element << "\t";
            }
            cout << endl;
        }
    }
};

int main() {
    Matrix m1(2, 3, {{1, 2, 3}, {4, 5, 6}});
    Matrix m2(3, 3, {{7, 8, 9}, {10, 11, 12}, {13, 14, 15}});
    Matrix m3 = m1 * m2;
    m3.printMatrix();
    return 0;
}