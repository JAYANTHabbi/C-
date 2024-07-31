#include <iostream>
#include <iomanip> 
using namespace std;
int main() {
    double number = 123.456789;
    cout.setf(ios::fixed); 
    cout.setf(ios::showpoint); 
    cout.precision(2); 
    cout << "Default format: " << number << endl;
    cout.unsetf(ios::fixed); 
    cout << "Unset fixed-point format: " << number << endl;
    cout << setw(10) << "Width: " << number << endl;
    cout.precision(4);                                                           
    cout << "Precision 4: " << number << endl;
    cout.flags(ios::dec | ios::scientific); 
    cout.precision(6);
    cout << "Default scientific format: " << number << endl; 
    return 0;
}

