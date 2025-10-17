#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
        cout << "Default constructor called.\n";
    }

    Rectangle(float l, float w) {
        length = l;
        width = w;
        cout << "Parameterized constructor called.\n";
    }

    void display() {
        cout << "Length = " << length << ", Width = " << width << endl;
    }

    ~Rectangle() {
        cout << "Rectangle object destroyed.\n";
    }
};

int main() {
    cout << "  Rectangle 1 \n";
    Rectangle r1;  
    cout << "Rectangle 1: ";
    r1.display();

    cout << "\n  Rectangle 2 \n";
    float l, w;
    cout << "Enter length for Rectangle 2: ";
    cin >> l;
    cout << "Enter width for Rectangle 2: ";
    cin >> w;
    Rectangle r2(l, w); 
    cout << "Rectangle 2: ";
    r2.display();

    cout << "\nProgram ends, destructors will be called.\n";
}
