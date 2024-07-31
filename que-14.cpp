#include <iostream>
using namespace std;

class PrintArray {
public:
    void printArray(int arr[], int size) {
        cout << "Printing integer array:\n";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void printArray(double arr[], int size) {
        cout << "Printing double array:\n";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void printArray(char arr[], int size) {
        cout << "Printing character array:\n";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    PrintArray printer;
    int intArr[] = {1, 2, 3, 4, 5};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    printer.printArray(intArr, intSize);

    double doubleArr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);
    printer.printArray(doubleArr, doubleSize);

    char charArr[] = {'a', 'b', 'c', 'd', 'e'};
    int charSize = sizeof(charArr) / sizeof(charArr[0]);
    printer.printArray(charArr, charSize);

    return 0;
}
