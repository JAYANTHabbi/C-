#include <iostream>
using namespace std;

class CircularQueue {
private:
    int *queue;
    int front;
    int rear;
    int size;
public:
    CircularQueue(int size) {
        this->size = size;
        queue = new int[size];
        front = rear = -1;
    }

    ~CircularQueue() {
        delete[] queue;
    }

    bool isFull() {
        return (rear + 1) % size == front;
    }

    bool isEmpty() {
        return front == -1;
    }

    void enqueue(int data) {
        if (isFull()) {
            cout << "Queue is full!" << endl;
            return;
        }
        if (isEmpty()) {
            front = 0;
        }
        rear = (rear + 1) % size;
        queue[rear] = data;
        cout << "Enqueued " << data << endl;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        int data = queue[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }
        cout << "Dequeued " << data << endl;
        return data;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return queue[front];
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Queue: ";
        if (rear >= front) {
            for (int i = front; i <= rear; i++)
                cout << queue[i] << " ";
        } else {
            for (int i = front; i < size; i++)
                cout << queue[i] << " ";
            for (int i = 0; i <= rear; i++)
                cout << queue[i] << " ";
        }
        cout << endl;
    }
};

// Example usage:
int main() {
    CircularQueue cq(5);

    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(40);
    cq.enqueue(50);
    cq.display();

    cq.dequeue();
    cq.display();

    cq.enqueue(60);
    cq.display();

    cout << "Front element is: " << cq.peek() << endl;

    return 0;
}


