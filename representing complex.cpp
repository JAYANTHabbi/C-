#include <iostream>
using namespace std;

class Complex {
    private:
        double real;
        double imag;
    public:
        
        Complex(double r = 0, double i = 0) : real(r), imag(i) {}

        
        Complex operator + (const Complex &other) const {
            return Complex(real + other.real, imag + other.imag);
        }

        
        Complex operator * (const Complex &other) const {
            return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
        }

        
        void display() const {
            cout << real << " + " << imag << "i" << endl;
        }
};

int main() {
    Complex c1(3.0, 2.0);
    Complex c2(1.0, 7.0);

    cout << "First complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    Complex sum = c1 + c2;
    cout << "Sum of complex numbers: ";
    sum.display();

    Complex product = c1 * c2;
    cout << "Product of complex numbers: ";
    product.display();

    return 0;
}

