#include <iostream>
using namespace std;

class Matrix {
    private:
        int rows;
        int cols;
        int **data;
    public:
        
        Matrix(int r, int c) : rows(r), cols(c) {
            data = new int*[rows];
            for(int i = 0; i < rows; ++i) {
                data[i] = new int[cols];
            }
        }

        
        ~Matrix() {
            for(int i = 0; i < rows; ++i) {
                delete[] data[i];
            }
            delete[] data;
        }

        
        void insertElement(int r, int c, int value) {
            if(r >= 0 && r < rows && c >= 0 && c < cols) {
                data[r][c] = value;
            } else {
                cout << "Invalid index" << endl;
            }
        }

        
        int retrieveElement(int r, int c) const {
            if(r >= 0 && r < rows && c >= 0 && c < cols) {
                return data[r][c];
            } else {
                cout << "Invalid index" << endl;
                return -1;  
            }
        }

        
        void display() const {
            for(int i = 0; i < rows; ++i) {
                for(int j = 0; j < cols; ++j) {
                    cout << data[i][j] << " ";
                }
                cout << endl;
            }
        }
};

int main() {
    int rows = 3, cols = 3;
    Matrix matrix(rows, cols);

    
    matrix.insertElement(0, 0, 1);
    matrix.insertElement(0, 1, 2);
    matrix.insertElement(0, 2, 3);
    matrix.insertElement(1, 0, 4);
    matrix.insertElement(1, 1, 5);
    matrix.insertElement(1, 2, 6);
    matrix.insertElement(2, 0, 7);
    matrix.insertElement(2, 1, 8);
    matrix.insertElement(2, 2, 9);

    cout << "Matrix:" << endl;
    matrix.display();

    
    int r = 1, c = 1;
    cout << "Element at (" << r << ", " << c << "): " << matrix.retrieveElement(r, c) << endl;

    return 0;
}

