#include <iostream>
using namespace std;

class c_polygon {
public:
    virtual double area() {
        return 0;
    }
};

class c_rectangle : public c_polygon {
private:
    double length, width;

public:
    c_rectangle() {
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << "Enter the width of the rectangle: ";
        cin >> width;
    }

    double area() override {
        return length * width;
    }
};

class c_triangle : public c_polygon {
private:
    double base, height;

public:
    c_triangle() {
        cout << "Enter the base of the triangle: ";
        cin >> base;
        cout << "Enter the height of the triangle: ";
        cin >> height;
    }

    double area() override {
        return 0.5 * base * height;
    }
};

int main() {
    c_polygon* p;
    c_rectangle rect;
    c_triangle tri;     
    p = &rect;
    cout << "Area of Rectangle: " << p->area() << endl;

    p = &tri;
    cout << "Area of Triangle: " << p->area() << endl;
}
