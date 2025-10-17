#include <iostream>
using namespace std;

class Student {
protected:
    string Name;
    int Rollno;
    string Course;

public:
    void setStudentDetails(string name, int roll, string course) {
        Name = name;
        Rollno = roll;
        Course = course;
    }

    void displayStudentDetails() {
        cout << "Name: " << Name << endl;
        cout << "Roll No: " << Rollno << endl;
        cout << "Course: " << Course << endl;
    }
};

class Test : virtual public Student {
protected:
    int marks[3];

public:
    void setMarks(int m1, int m2, int m3) {
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }

    void displayMarks() {
        cout << "Marks in 3 subjects: ";
        for (int i = 0; i < 3; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }

    int totalMarks() {
        return marks[0] + marks[1] + marks[2];
    }
};

class GraceMarks : virtual public Student {
protected:
    int BonusMark;

public:
    void setBonusMark(int bonus) {
        BonusMark = bonus;
    }

    int getBonusMark() {
        return BonusMark;
    }
};

class Result : public Test, public GraceMarks {
public:
    void displayResult() {
        displayStudentDetails();
        displayMarks();
        cout << "Bonus Mark: " << getBonusMark() << endl;
        int total = totalMarks() + getBonusMark();
        cout << "Total Marks : " << total << endl;
    }
};

int main() {
    Result r;

    r.setStudentDetails("LAmi", 11, "Computer Science");

    r.setMarks(85, 90, 78);

    r.setBonusMark(5);

    r.displayResult();

}
