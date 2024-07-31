#include<iostream>
using namespace std;

class Person {
    private:
        string name;
        int age;
    public:
        Person(string name = "", int age = 0) : name(name), age(age) {}
        bool operator==(const Person& other) const {
            return (name == other.name && age == other.age);
        }

        void display() const {
            cout << "Name: " << name << ", Age: " << age << endl;
        }
};

int main() {
    Person person1("jayanth", 30);
    Person person2("abbi", 30);
    Person person3("jayanth abbi", 25);

    cout << "Person 1: ";
    person1.display();
    cout << "Person 2: ";
    person2.display();
    cout << "Person 3: ";
    person3.display();

    if (person1 == person2) {
        cout << "Person 1 and Person 2 are the same." << endl;
    } else {
        cout << "Person 1 and Person 2 are different." << endl;
    }

    if (person1 == person3) {
        cout << "Person 1 and Person 3 are the same." << endl;
    } else {
        cout << "Person 1 and Person 3 are different." << endl;
    }

    return 0;
}



