#include <iostream>
using namespace std;

int main() {
    int a;
    int* ptr1;
    int** ptr2;
    
    cout << "Enter an integer value for a: ";
    cin >> a;

    ptr1 = &a;
    ptr2 = &ptr1;

    cout << "The value of a: " << a << "\n";
    cout << "The address of a: " << ptr1 << "\n";
    cout << "The address of ptr1: " << ptr2 << "\n";

    cout << "\nAfter incrementing pointer values:\n\n";
    ptr1 += 2;
    cout << "The address of a after incrementing ptr1: " << ptr1 << "\n";
    ptr2 += 2;
    cout << "The address of ptr1 after incrementing ptr2: " << ptr2 << "\n";

    return 0;
}
