#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;

public:
    void readData() {
        cout << "Enter car brand: ";
        cin >> brand;
        cout << "Enter car model: ";
        cin >> model;
        cout << "Enter manufacturing year: ";
        cin >> year;
    }

    void displayData() {
        cout << "\nCar Details:" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Car c1, c2, c3;

    cout << "Enter details of Car 1:"<<endl;
    c1.readData();

    cout << "\nEnter details of Car 2:"<<endl;
    c2.readData();

    cout << "\nEnter details of Car 3:"<<endl;
    c3.readData();

    cout << "Displaying Car Details"<<endl;
    cout << "\nCar 1:";
    c1.displayData();

    cout << "\nCar 2:";
    c2.displayData();

    cout << "\nCar 3:";
    c3.displayData();

}
