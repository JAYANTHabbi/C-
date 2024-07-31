#include <iostream>
#include <fstream>
using namespace std;

class Employee {
public:
    string name;
    int id;
    double salary;

    void getData() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Employee Salary: ";
        cin >> salary;
    }

    void displayData() const {
        cout << "ID: " << id << ", Name: " << name << ", Salary: " << salary << endl;
    }
};

void addEmployee() {
    Employee emp;
    emp.getData();
    ofstream outfile("employees.txt", ios::app);
    outfile << emp.id << " " << emp.name << " " << emp.salary << endl;
    outfile.close();
}

void displayEmployees() {
    Employee emp;
    ifstream infile("employees.txt");
    while (infile >> emp.id >> emp.name >> emp.salary) {
        emp.displayData();
    }
    infile.close();
}

int main() {
    int choice;
    while (true) {
        cout << "1. Add Employee\n2. Display Employees\n3. Exit\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                displayEmployees();
                break;
            case 3:
                return 0;
            default:
                cout << "Invalid choice, try again.\n";
        }
    }
}
