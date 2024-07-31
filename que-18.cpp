#include <iostream>
#include <cmath> // 

using namespace std;

class PowerCalculator {
public:
    int power(int base, int exponent) {
        return pow(base, exponent); 
    }

    double power(double base, double exponent) {
        return pow(base, exponent); 
    }
};

int main() {
    PowerCalculator calc;

    int intBase = 2;
    int intExponent = 3;
    cout << "Power of " << intBase << " raised to " << intExponent << " is: " << calc.power(intBase, intExponent) << endl;

    double doubleBase = 2.5;
    double doubleExponent = 1.5;
    cout << "Power of " << doubleBase << " raised to " << doubleExponent << " is: " << calc.power(doubleBase, doubleExponent) << endl;

    return 0;
}
