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

float area(float base, float height, int) {
    return 0.5 * base * height;
}

int main() {
    float radius, length, width, base, height;
    int side;

    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of circle: " << area(radius) << endl;

    cout << "Enter side of square: ";
    cin >> side;
    cout << "Area of square: " << area(side) << endl;

    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;
    cout << "Area of rectangle: " << area(length, width) << endl;

    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of triangle: " << area(base, height, 0) << endl;

}
