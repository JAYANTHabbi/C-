#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    cout << "Stack after pushes: ";
    stack<int> temp = myStack;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
    myStack.pop();
    myStack.pop();

    cout << "Stack after pops: ";
    temp = myStack;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
    cout << "Top element: " << myStack.top() << endl;

    return 0;
}
