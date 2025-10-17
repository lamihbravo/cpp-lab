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
    c_rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double area() override {
        return length * width;
    }
};

class c_triangle : public c_polygon {
private:
    double base, height;

public:
    c_triangle(double b, double h) {
        base = b;
        height = h;
    }

    double area() override {
        return 0.5 * base * height;
    }
};

int main() {
    c_polygon* p1;
    c_rectangle rect(10, 5);
    c_triangle tri(8, 6);

    p1 = &rect;
    cout << "Area of Rectangle: " << p1->area() << endl;

    p1 = &tri;
    cout << "Area of Triangle: " << p1->area() << endl;

}
