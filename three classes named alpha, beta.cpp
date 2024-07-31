#include <iostream>

class Alpha {
public:
    Alpha() {
        std::cout << "Constructor of Alpha called" << std::endl;
    }
};


class Beta {
public:
    Beta() {
        std::cout << "Constructor of Beta called" << std::endl;
    }
};

class Gamma : public Alpha, public Beta {
public:
    Gamma() {
        std::cout << "Constructor of Gamma called" << std::endl;
    }
};

int main() {
    std::cout << "Creating an object of Gamma" << std::endl;
    Gamma gammaObject;
    return 0;
}

