#include <iostream>
#include <fstream>
struct Person {
    int id;
    char name[20];
    int age;
};
int main() {
    Person p1 = {1, "John", 25};
    std::ofstream outFile("person.dat", std::ios::binary);
    outFile.write((char*)&p1, sizeof(Person));
    outFile.close();
    Person p2;
    std::ifstream inFile("person.dat", std::ios::binary);
    inFile.read((char*)&p2, sizeof(Person));
    inFile.close();
    std::cout << "Name: " << p2.name << std::endl;
    std::cout << "Age: " << p2.age << std::endl;
    return 0;
}

