#include<iostream>
#include<string>
using namespace std;

class ShoppingList {
    private:
        string code;
        double price;
    public:
        void addItem(string c, double p) {
            code = c;
            price = p;
        }
        void deleteItem(string c) {
            if (code == c) {
                code = "";
                price = 0.0;
            }
        }
        double totalPrice() {
            return price;
        }
        void printItem() {
            cout << "Code: " << code << endl;
            cout << "Price: " << price << endl;
        }
};

int main() {
    ShoppingList list;
    int choice;
    string code;
    double price;

    do {
        cout << "1. Add item" << endl;
        cout << "2. Delete item" << endl;
        cout << "3. Print total value" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter code: ";
                cin >> code;
                cout << "Enter price: ";
                cin >> price;
                list.addItem(code, price);
                break;
            case 2:
                cout << "Enter code to delete: ";
                cin >> code;
                list.deleteItem(code);
                break;
            case 3:
                list.printItem();
                cout << "Total value: " << list.totalPrice() << endl;
                break;
            case 4:
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 4);

    return 0;
}

