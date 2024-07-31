#include <iostream>
using namespace std;

class FunctionCaller {
public:
    void operator()(int x, int y) {
        cout << "Calling function with arguments: " << x << " and " << y << endl;
        int result = add(x, y);
        cout << "Result of addition: " << result << endl;
    }

private:
    int add(int a, int b) {
        return a + b;
    }
};

int main() {
    FunctionCaller caller;
    caller(5, 3);
    
    return 0;
}	 b
