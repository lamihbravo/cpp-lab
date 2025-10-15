#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle() {
        length = 0;
        width = 0;
        cout << "Default constructor called.\n";
    }

    Rectangle(float l, float w) {
        length = l;
        width = w;
        cout << "Parameterized constructor called.\n";
    }

    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }

    ~Rectangle() {
        cout << "Rectangle object destroyed.\n";
    }
};

int main() {
    Rectangle r1;
    cout << "Rectangle 1 (default constructor): ";
    r1.display();

    Rectangle r2(10.5, 5.2);
    cout << "Rectangle 2 (parameterized constructor): ";
    r2.display();

}
