#include<iostream>
#include<stdexcept>
using namespace std;

int main() {
    try {
        cout << "Try block" << endl;
        throw runtime_error("My runtime error"); // Throw a runtime_error exception
    } catch (const runtime_error& e) {
        cout << "Catch block: Exception caught - " << e.what() << endl;
    }

    return 0;
}


