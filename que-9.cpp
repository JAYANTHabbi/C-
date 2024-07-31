#include <iostream>
using namespace std;
class Number {
private:
    int value;

public:
    Number(int val = 0) : value(val) {}
    Number& operator+=(const Number& other) {
        this->value += other.value;
        return *this;
    }
    int getValue() const {
        return value;
    }
};

int main() {
    Number num1(5);
    Number num2(10);
    cout << "Initial values:" << endl;
    cout << "Number 1: " << num1.getValue() << endl;
    cout << "Number 2: " << num2.getValue() << endl;
    num1 += num2;

    // Display values after addition
    cout << "\nAfter using += operator:" << endl;
    cout << "Number 1: " << num1.getValue() << endl;
    cout << "Number 2: " << num2.getValue() << endl;

    return 0;
}
