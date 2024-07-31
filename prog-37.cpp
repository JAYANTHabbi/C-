#include <iostream>
#include <stdexcept> 
using namespace std;
void testFunction(int value) {
    if (value == 0) {
        throw invalid_argument("Invalid argument: value cannot be zero!");
    } else if (value < 0) {
        throw out_of_range("Out of range: value cannot be negative!");
    } else if (value > 100) {
        throw overflow_error("Overflow error: value cannot exceed 100!");
    } else {
        cout << "Value is " << value << endl;
    }
}
int main() {
    try {
        testFunction(50); 
        testFunction(0);  
    } catch (const invalid_argument &e) {
        cout << "Caught an invalid_argument exception: " << e.what() << endl;
    } catch (const out_of_range &e) {
        cout << "Caught an out_of_range exception: " << e.what() << endl;
    } catch (const overflow_error &e) {
        cout << "Caught an overflow_error exception: " << e.what() << endl;
    } catch (const exception &e) { 
        cout << "Caught a general exception: " << e.what() << endl;
    } catch (...) { 
        cout << "Caught an unknown exception!" << endl;
    }

    try {
        testFunction(-10); e
    } catch (const invalid_argument &e) {
        cout << "Caught an invalid_argument exception: " << e.what() << endl;
    } catch (const out_of_range &e) {
        cout << "Caught an out_of_range exception: " << e.what() << endl;
    } catch (const overflow_error &e) {
        cout << "Caught an overflow_error exception: " << e.what() << endl;
    } catch (const exception &e) { 
        cout << "Caught a general exception: " << e.what() << endl;h any other standard exceptions
    } catch (...) { 
        cout << "Caught an unknown exception!" << endl;
    }

    try {
        testFunction(150); 
    } catch (const invalid_argument &e) {
        cout << "Caught an invalid_argument exception: " << e.what() << endl;
    } catch (const out_of_range &e) {
        cout << "Caught an out_of_range exception: " << e.what() << endl;
    } catch (const overflow_error &e) {
        cout << "Caught an overflow_error exception: " << e.what() << endl;
    } catch (const exception &e) { 
        cout << "Caught a general exception: " << e.what() << endl;
    } catch (...) { 
        cout << "Caught an unknown exception!" << endl;
    }

    return 0;
}

