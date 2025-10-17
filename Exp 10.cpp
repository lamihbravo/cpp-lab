#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int roll_number;

public:
    Student(string n, int a, int r) : Person(n, a) {
        roll_number = r;
    }

    void showDetails() {
        cout << "Roll Number: " << roll_number << endl;
    }
};

int main() {
    Student student("Lami", 20, 11);

    student.display();

    student.showDetails();

    return 0;
}
