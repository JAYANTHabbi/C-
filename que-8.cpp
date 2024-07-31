#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
    Complex operator-(const Complex& other) const {
        Complex result;
        result.real = this->real - other.real;
        result.imag = this->imag - other.imag;
        return result;
    }
    void display() const {
        cout << "(" << real << " + " << imag << "i)";
    }
};

int main() {
    Complex c1(5.0, 3.0);
    Complex c2(2.0, 1.5);

    cout << "Complex Number 1: ";
    c1.display();
    cout << endl;

    cout << "Complex Number 2: ";
    c2.display();
    cout << endl;
    Complex result = c1 - c2;

    cout << "Result of subtraction: ";
    result.display();
    cout << endl;

    return 0;
}
