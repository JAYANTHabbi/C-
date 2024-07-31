#include<iostream>
using namespace std;
class Counter {
    private:
        int value;
    public:
        Counter(int value = 0) : value(value) {}
        Counter& operator++() {
            ++value;
            return *this;
        }
        Counter operator++(int) {
            Counter temp = *this;
            ++value;
            return temp;
        }
        int getValue() const {
            return value;
        }
};

int main() {
    Counter c(5);

    cout << "Value: " << c.getValue() << endl;
    ++c;
    cout << "After prefix ++: " << c.getValue() << endl;
    c++;
    cout << "After postfix ++: " << c.getValue() << endl;

    return 0;
}


