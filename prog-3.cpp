#include<iostream>
using namespace std;

class MyException : public exception {
    public:
        const char* what() const throw() {
            return "My custom exception";
        }
};

int main() {
    try {
        cout << "Try block" << endl;
        throw MyException();
    } catch (MyException& e) {
        cout << "Catch block: Exception caught - " << e.what() << endl;
    }

    return 0;
}

