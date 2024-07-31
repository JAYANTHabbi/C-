,#include<iostream>
using namespace std;

int main() {
    try {
        cout << "Outer try block" << endl;
        try {
            cout << "Inner try block" << endl;
            throw 10;
        } catch (int e) {
            cout << "Inner catch block: Exception caught - " << e << endl;
            throw; 
        }
    } catch (int e) {
        cout << "Outer catch block: Exception caught - " << e << endl;
    }

    return 0;
}



