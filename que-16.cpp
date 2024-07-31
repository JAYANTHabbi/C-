#include <iostream>
using namespace std;

class Factorial {
public:

    int factorial(int num) {
        if (num < 0) {
            cout << "Factorial is not defined for negative numbers.\n";
            return -1; 
        }
        int fact = 1;
        for (int i = 1; i <= num; ++i) {
            fact *= i;
        }
        return fact;
    }
    double factorial(double num) {
        if (num < 0) {
            cout << "Factorial is not defined for negative numbers.\n";
            return -1.0; 
        }
        double fact = 1.0;
        for (int i = 1; i <= static_cast<int>(num); ++i) {
            fact *= i;
        }
        return fact;
    }
};

int main() {
    Factorial fact;

    int num1;
    cout << "Enter an integer number to find its factorial: ";
    cin >> num1;
    int intFact = fact.factorial(num1);
    if (intFact != -1) {
        cout << "Factorial of " << num1 << " is: " << intFact << endl;
    }
    double num2;
    cout << "Enter a floating-point number to find its factorial: ";
    cin >> num2;
    double doubleFact = fact.factorial(num2);
    if (doubleFact != -1.0) {
        cout << "Factorial of " << num2 << " is: " << doubleFact << endl;
    }

    return 0;
}
