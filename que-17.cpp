#include <iostream>
#include <algorithm> // for std::sort
using namespace std;

class ArraySort {
public:
    void sort(int arr[], int size) {
        std::sort(arr, arr + size); // Use std::sort from algorithm header
    }

    void sort(double arr[], int size) {
        std::sort(arr, arr + size); // Use std::sort from algorithm header
    }
};

int main() {
    ArraySort sorter;

    int intArr[] = { 5, 2, 8, 1, 6 };
    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    cout << "Integer array before sorting: ";
    for (int i = 0; i < intSize; ++i) {
        cout << intArr[i] << " ";
    }
    cout << endl;
    sorter.sort(intArr, intSize);
    cout << "Integer array after sorting: ";
    for (int i = 0; i < intSize; ++i) {
        cout << intArr[i] << " ";
    }
    cout << endl;

    double doubleArr[] = { 3.5, 1.2, 4.8, 2.1, 6.3 };
    int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);
    cout << "Double array before sorting: ";
    for (int i = 0; i < doubleSize; ++i) {
        cout << doubleArr[i] << " ";
    }
    cout << endl;
    sorter.sort(doubleArr, doubleSize);
    cout << "Double array after sorting: ";
    for (int i = 0; i < doubleSize; ++i) {
        cout << doubleArr[i] << " ";
    }
    cout << endl;

    return 0;
}
