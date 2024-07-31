#include <iostream>
#include <vector>

using namespace std;

class Matrix {
private:
    vector<vector<int>> mat;
    int rows;
    int cols;

public:
    Matrix(int r, int c) : rows(r), cols(c) {
        mat.resize(rows, vector<int>(cols, 0));
    }

    void inputMatrix() {
        cout << "Enter matrix elements row by row:\n";
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cin >> mat[i][j];
            }
        }
    }

    Matrix operator*(const Matrix& other) const {
        if (cols != other.rows) {
            cout << "Matrix dimensions are not compatible for multiplication.\n";
            return Matrix(0, 0);
        }

        Matrix result(rows, other.cols);

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.cols; ++j) {
                for (int k = 0; k < cols; ++k) {
                    result.mat[i][j] += mat[i][k] * other.mat[k][j];
                }
            }
        }

        return result;
    }

    void displayMatrix() const {
        cout << "Matrix elements:\n";
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int r1, c1, r2, c2;

    cout << "Enter dimensions of first matrix (rows columns): ";
    cin >> r1 >> c1;

    cout << "Enter dimensions of second matrix (rows columns): ";
    cin >> r2 >> c2;

    Matrix mat1(r1, c1);
    Matrix mat2(r2, c2);

    mat1.inputMatrix();
    mat2.inputMatrix();

    cout << "Matrix 1:\n";
    mat1.displayMatrix();

    cout << "Matrix 2:\n";
    mat2.displayMatrix();

    Matrix result = mat1 * mat2;

    cout << "Result of matrix multiplication:\n";
    result.displayMatrix();

    return 0;
}
