#include<iostream>
using namespace std;

int main() {
    try {
        cout << "Try block" << endl;
        throw 10;
    } catch (int e) {
        cout << "Catch block: Exception caught - " << e << endl;
    }

    return 0;
}


