#include <iostream>
using namespace std;
class B;
class A {
    private:
        int numA;
    public:
        A(int n) : numA(n) {}
        friend int findMax(A, B);  
};
class B {
    private:
        int numB;
    public:
        B(int n) : numB(n) {}
        friend int findMax(A, B);  
};
int findMax(A a, B b) {
    if (a.numA > b.numB)
        return a.numA;
    else
        return b.numB;
}
int main() {
    A objA(10);
    B objB(20);
    cout << "Maximum number is: " << findMax(objA, objB) << endl;
    return 0;
}

