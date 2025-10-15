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
        cout << "Enter year: ";
        cin >> year;
    }

    void displayData() {
        cout << "Car Details:" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Car c1;          
    c1.readData();  
    c1.displayData(); 

}
