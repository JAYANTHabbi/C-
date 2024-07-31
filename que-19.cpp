#include <iostream>
#include <cmath> // for fabs function

using namespace std;

class AbsoluteValue {
public:
    int abs(int num) {
        return fabs(num);
    }

    double abs(double num) {
        return fabs(num); 
    }
};

int main() {
    AbsoluteValue absValue;
    int intValue = -10;
    cout << "Absolute value of " << intValue << " is: " << absValue.abs(intValue) << endl;
    double doubleValue = -5.5;
    cout << "Absolute value of " << doubleValue << " is: " << absValue.abs(doubleValue) << endl;

    return 0;
}
