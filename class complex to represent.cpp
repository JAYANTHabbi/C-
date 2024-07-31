#include <iostream>
using namespace std;

class Complex {
    private:
        double real;
        double imag;
    public:
        Complex() : real(0), imag(0) {}  
        Complex(double r, double i) : real(r), imag(i) {}  

        void display() const {
            cout << real << " + " << imag << "i" << endl;
        }

        
        friend Complex addComplex(const Complex &, const Complex &);
};

Complex addComplex(const Complex &c1, const Complex &c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 4.5);

    cout << "First complex number: ";
    c1.display();
    
    cout << "Second complex number: ";
    c2.display();

    Complex c3 = addComplex(c1, c2);

    cout << "Sum of the complex numbers: ";
    c3.display();

    return 0;
}

