#include <iostream>
using namespace std;

float area(float radius) {
    return 3.14159 * radius * radius;
}

float area(int side) {
    return side * side;
}

float area(float length, float width) {
    return length * width;
}

float area(float base, float height, int dummy) {
    return 0.5 * base * height;
}

int main() {
    float r, l, w, b, h;
    int s;

    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Area of circle: " << area(r) << endl;

    cout << "\nEnter side of square: ";
    cin >> s;
    cout << "Area of square: " << area(s) << endl;

    cout << "\nEnter length and width of rectangle: ";
    cin >> l >> w;
    cout << "Area of rectangle: " << area(l, w) << endl;

    cout << "\nEnter base and height of triangle: ";
    cin >> b >> h;
    cout << "Area of triangle: " << area(b, h,0) << endl;

}
