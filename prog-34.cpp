#include <iostream>
using namespace std;

class Stack {
private:
    int *stack;
    int top;
    int capacity;

public:
    Stack(int size) {
        stack = new int[size];
        capacity = size;
        top = -1;
    }

    ~Stack() {
        delete[] stack;
    }

    void push(int x) {
        if (isFull()) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        stack[++top] = x;
        cout << "Pushed " << x << endl;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow!" << endl;
            return -1;
        }
        cout << "Popped " << stack[top] << endl;
        return stack[top--];
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return stack[top];
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == capacity - 1;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Stack: ";
        for (int i = 0; i <= top; i++) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
};

// Example usage:
int main() {
    Stack s(5);

    s.push(10);
    s.push(20);
    s.push(30);
    s.display();

    s.pop();
    s.display();

    s.push(40);
    s.push(50);
    s.push(60);
    s.display();

    cout << "Top element is: " << s.peek() << endl;

    return 0;
}

