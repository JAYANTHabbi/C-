#include<iostream>
using namespace std;

int main() {
    try {
        cout << "Try block" << endl;
        throw 10.5; // Throws a double exception
    } catch (int e) {
        cout << "Catch block (int): Exception caught - " << e << endl;
    } catch (double e) {
        cout << "Catch block (double): Exception caught - " << e << endl;
    } catch (...) {
        cout << "Catch block (default): Exception caught" << endl;
    }

    return 0;
}
 	
