#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class Operations {
public:
    void sum(int arr1[], int arr2[], int size) {
        int result[MAX_SIZE];
        for (int i = 0; i < size; ++i) {
            result[i] = arr1[i] + arr2[i];
        }
        cout << "Sum of arrays:\n";
        display(result, size);
    }
    void sum(int mat1[][MAX_SIZE], int mat2[][MAX_SIZE], int rows, int cols) {
        int result[MAX_SIZE][MAX_SIZE];
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result[i][j] = mat1[i][j] + mat2[i][j];
            }
        }
        cout << "Sum of matrices:\n";
        display(result, rows, cols);
    }

private:
    
    void display(int arr[], int size) {
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void display(int mat[][MAX_SIZE], int rows, int cols) {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Operations op;

    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {5, 4, 3, 2, 1};
    int arr_size = sizeof(arr1) / sizeof(arr1[0]);

    op.sum(arr1, arr2, arr_size);

    int mat1[][MAX_SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[][MAX_SIZE] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int rows = 3, cols = 3;

    op.sum(mat1, mat2, rows, cols);

    return 0;
}
