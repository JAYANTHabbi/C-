#include<iostream>
using namespace std;
class Test {
    private:
        static int count;
    public:
        Test() {
            count++;
        }
        static void showcount() {
            cout << "Number of objects created: " << count << endl;
        }
};
int Test::count = 0;
int main() {
    Test t1, t2, t3;
    Test::showcount();
    return 0;
}


