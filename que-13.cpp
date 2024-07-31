#include <iostream>
using namespace std;

class Shape {
public:
    float area(float side) {
        return side * side;
    }

    float area(float length, float breadth) {
        return length * breadth;
    }

    float area(float radius) {
        return 3.14f * radius * radius; 
    }
};

int main() {
    Shape shape;
    float side;
    cout << "Enter the side length of the square: ";
    cin >> side;
    cout << "Area of the square: " << shape.area(side) << endl;

    float length, breadth;
    cout << "Enter the length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Area of the rectangle: " << shape.area(length, breadth) << endl;

    float radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << shape.area(radius) << endl;

    return 0;
}
