#include <iostream>
using namespace std;

inline float areaCircle(float radius) {
    return 3.14159 * radius * radius;
}

inline float areaSquare(float side) {
    return side * side;
}


inline float areaRectangle(float length, float width) {
    return length * width;
}

inline float areaTriangle(float base, float height) {
    return 0.5 * base * height;
}

int main() {
    float r, s, l, w, b, h;

    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Area of circle: " << areaCircle(r) << endl;

    cout << "Enter side of square: ";
    cin >> s;
    cout << "Area of square: " << areaSquare(s) << endl;

    cout << "Enter length and width of rectangle: ";
    cin >> l >> w;
    cout << "Area of rectangle: " << areaRectangle(l, w) << endl;

    cout << "Enter base and height of triangle: ";
    cin >> b >> h;
    cout << "Area of triangle: " << areaTriangle(b, h) << endl;

    return 0;
}
