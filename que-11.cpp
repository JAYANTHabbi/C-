#include <iostream>
using namespace std;
class MyArray {
private:
    int arr[5];
public:
    MyArray() {
        for (int i = 0; i < 5; ++i) {
            arr[i] = i + 1;
        }
    }
    int& operator[](int index) {
        return arr[index];
    }
};
int main() {
    MyArray arrObj;
    for (int i = 0; i < 5; ++i) {
        cout << "arrObj[" << i << "] = " << arrObj[i] << endl;
    }
    arrObj[2] = 100;
    cout << "After modification: arrObj[2] = " << arrObj[2] << endl;

    return 0;
}` 
