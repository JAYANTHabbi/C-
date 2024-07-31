#include <iostream>
#include <cstdlib> // for std::size_t

class MyClass {
public:
    void* operator new(std::size_t size) {
        std::cout << "Overloaded new operator allocating " << size << " bytes" << std::endl;
        void* ptr = std::malloc(size);
        return ptr;
    }

    void operator delete(void* ptr) {
        std::cout << "Overloaded delete operator deallocating memory" << std::endl;
        std::free(ptr);
    }

    // Example member function
    void display() {
        std::cout << "Displaying MyClass object" << std::endl;
    }
};

int main() {
    MyClass* obj = new MyClass();
    
    obj->display();
    
    delete obj;
    
    return 0;
}

