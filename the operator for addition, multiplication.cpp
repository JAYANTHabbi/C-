#include <iostream>
#include <cstring>

class MyClass {
private:
    char* data;

public:
    // Constructor
    MyClass(const char* value = "") {
        data = new char[strlen(value) + 1];
        strcpy(data, value);
        std::cout << "Constructor called for " << data << std::endl;
    }

    // Copy Constructor
    MyClass(const MyClass& other) {
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
        std::cout << "Copy Constructor called for " << data << std::endl;
    }

    // Assignment Operator
    MyClass& operator=(const MyClass& other) {
        if (this == &other) {
            return *this; // self-assignment check
        }
        delete[] data;
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
        std::cout << "Assignment Operator called for " << data << std::endl;
        return *this;
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor called for " << data << std::endl;
        delete[] data;
    }

    // Function to display data
    void display() const {
        std::cout << "Data: " << data << std::endl;
    }
};

int main() {
    // Creating an object
    MyClass obj1("Object 1");
    obj1.display();

    // Using copy constructor to create a new object
    MyClass obj2 = obj1; // This calls the copy constructor
    obj2.display();

    // Creating another object
    MyClass obj3("Object 3");
    obj3.display();

    // Using assignment operator to copy data from obj1 to obj3
    obj3 = obj1; // This calls the assignment operator
    obj3.display();

    return 0;
}

