#include<iostream>
#include<string>
using namespace std;

class Manager {
    private:
        string name;
        int age;
    public:
        Manager(string n, int a) {
            name = n;
            age = a;
        }
        void display() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

int main() {
    Manager managers[3] = {
        Manager("John Doe", 40),
        Manager("Jane Smith", 35),
        Manager("Bob Brown", 50)
    };

    for (int i = 0; i < 3; i++) {
        managers[i].display();
        cout << endl;
    }

    return 0;
}

