#include <iostream>
#include <cstring>

class MyClass {
private:
    char* data;

public:
   
    MyClass(const char* value = "") {
        data = new char[strlen(value) + 1];
        strcpy(data, value);
        std::cout << "Constructor called for " << data << std::endl;
    }

   
    MyClass(const MyClass& other) {
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
        std::cout << "Copy Constructor called for " << data << std::endl;
    }

    
    MyClass& operator=(const MyClass& other) {
        if (this == &other) {
            return *this; 
        }
        delete[] data;
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
        std::cout << "Assignment Operator called for " << data << std::endl;
        return *this;
    }

    
    ~MyClass() {
        std::cout << "Destructor called for " << data << std::endl;
        delete[] data;
    }

   
    void display() const {
        std::cout << "Data: " << data << std::endl;
    }
};

int main() {
    
    MyClass obj1("Object 1");
    obj1.display();

   
    MyClass obj2 = obj1;         

    obj2.display();

    
    MyClass obj3("Object 3");
    obj3.display();

    
    obj3 = obj1; 
    obj3.display();

    return 0;
}

