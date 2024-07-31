#include<iostream>
using namespace std;
class Person {
    private:
        string name;
        int age;
        float grade;
    public:
        Person(string name = "", int age = 0,float grade=0) : name(name), age(age) ,grade(grade){}
        friend ostream& operator<<(ostream& out, const Person& person) {
            out << "Name: " << person.name << ", Age: " << person.age<<",grade"<<person.grade;
            return out;
        }
};

int main() {
    Person person("jayanth",20,4.5);
    cout << person << endl;
    return 0;
}



