#include <iostream>
#include <iomanip> // for setw and setprecision

using namespace std;

int main() {
    double number = 123.456789;

    // Set formatting flags using setf
    cout.setf(ios::fixed); // Set fixed-point notation
    cout.setf(ios::showpoint); // Show decimal point even if no fractional part
    cout.precision(2); // Set precision to 2 decimal places

    cout << "Default format: " << number << endl;

    // Unset formatting flags using unsetf
    cout.unsetf(ios::fixed); // Unset fixed-point notation
    cout << "Unset fixed-point format: " << number << endl;

    // Setting width using setw
    cout << setw(10) << "Width: " << number << endl;

    // Using setprecision
    cout.precision(4); // Change precision to 4 decimal places
    cout << "Precision 4: " << number << endl;

    // Restore default formatting
    cout.flags(ios::dec | ios::scientific); // Restore default flags (scientific notation)
    cout.precision(6); // Restore default precision

    cout << "Default scientific format: " << number << endl;

    return 0;
}

