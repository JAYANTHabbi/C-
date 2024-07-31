#include <iostream>

class Vector {
    private:
        int x, y, z;
    public:
        Vector(int a, int b, int c) {
            x = a;
            y = b;
            z = c;
        }
        friend Vector operator*(Vector &, Vector &);
        friend std::ostream &operator<<(std::ostream &, Vector &);
        friend std::istream &operator>>(std::istream &, Vector &);
};

Vector operator*(Vector &v1, Vector &v2) {
    return Vector(v1.x * v2.x, v1.y * v2.y, v1.z * v2.z);
}

std::ostream &operator<<(std::ostream &out, Vector &v) {
    out << "(" << v.x << ", " << v.y << ", " << v.z << ")";
    return out;
}

std::istream &operator>>(std::istream &in, Vector &v) {
    in >> v.x >> v.y >> v.z;
    return in;
}

int main() {
    Vector v1(1, 2, 3), v2(4, 5, 6);
    Vector v3 = v1 * v2;
    std::cout << v3 << std::endl;
    return 0;
}

