#include <iostream>
using namespace std;

class class_2;  

class class_1 {
    private:
        int value1;
    public:
        class_1(int val) : value1(val) {}
        void display() {
            cout << "Value in class_1: " << value1 << endl;
        }
        friend void swapValues(class_1 &, class_2 &);  
};ction

class class_2 {
    private:
        int value2;
    public:
        class_2(int val) : value2(val) {}
        void display() {
            cout << "Value in class_2: " << value2 << endl;
        }
        friend void swapValues(class_1 &, class_2 &);  
};

void swapValues(class_1 &obj1, class_2 &obj2) {
    int temp = obj1.value1;
    obj1.value1 = obj2.value2;
    obj2.value2 = temp;
}

int main() {
    class_1 obj1(10);
    class_2 obj2(20);

    cout << "Before swapping:" << endl;
    obj1.display();
    obj2.display();

    swapValues(obj1, obj2);

    cout << "After swapping:" << endl;
    obj1.display();
    obj2.display();

    return 0;
}

