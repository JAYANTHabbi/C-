#include <iostream>
using namespace std;

class MyClass {
    private:
        int data;
    public:
        
        MyClass(int d) : data(d) {
            cout << "Constructor called. Data initialized to " << data << endl;
        }

       
        ~MyClass() {
            cout << "Destructor called. Data was " << data << endl;
        }

        
        void display() const {
            cout << "Data: " << data << endl;
        }
};

int main() {
    
    MyClass* objPtr = new MyClass(10);

    
    objPtr->display();

    delete objPtr;

    return 0;
}

