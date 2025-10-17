#include <iostream>
using namespace std;

inline float areaCircle(float radius) {
    return 3.14159f * radius * radius;
}

inline float areaSquare(float side) {
    return side * side;
}

inline float areaRectangle(float length, float width) {
    return length * width;
}

inline float areaTriangle(float base, float height) {
    return 0.5f * base * height;
}

int main() {
    float r, s, l, w, b, h;

    cout << " Circle \n";
    cout << "Enter radius: ";
    cin >> r;
    cout << "Circle Area = " << areaCircle(r) << " square units\n\n";

    cout << " Square \n";
    cout << "Enter side length: ";
    cin >> s;
    cout << "Square Area = " << areaSquare(s) << " square units\n\n";

    cout << " Rectangle \n";
    cout << "Enter length and width: ";
    cin >> l >> w;
    cout << "Rectangle Area = " << areaRectangle(l, w) << " square units\n\n";

    cout << " Triangle \n";
    cout << "Enter base and height: ";
    cin >> b >> h;
    cout << "Triangle Area = " << areaTriangle(b, h) << " square units\n";

}
