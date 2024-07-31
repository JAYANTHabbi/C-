#include<iostream>
using namespace std;

class Complex {
    private:
        double real;
        double imag;
    public:
        Complex(double real = 0, double imag = 0) : real(real), imag(imag) {}
        Complex operator+(const Complex& other) {
            return Complex(real + other.real, imag + other.imag);
        }

        void display() {
            cout << real << " + " << imag << "i" << endl;
        }
};

int main() {
    Complex c1(3, 4);
    Complex c2(2, 1);

    Complex c3 = c1 + c2;

    cout << "Complex number 1: ";
    c1.display();
    cout << "Complex number 2: ";
    c2.display();
    cout << "Sum: ";
    c3.display();

    return 0;
}


