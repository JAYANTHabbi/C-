#include <iostream>
using namespace std;

class Number {
    private:
        int value;
    public:
        
        Number(int v = 0) : value(v) {}

        Number(const Number &obj) {
            value = obj.value;
        }

        void display() const {
            cout << "Value: " << value << endl;
        }
};

int main() {
    Number num1(42);  
    cout << "Original object (num1): ";
    num1.display();

    Number num2 = num1;  
    cout << "Copied object (num2): ";
    num2.display();

    return 0;
}

