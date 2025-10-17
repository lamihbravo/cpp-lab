#include <iostream>
using namespace std;

class Student {
protected:
    string name,course;
    int rollno;
    

public:
    void input_details() {
       
        cout<<"Enter student name:"<<endl;
        cin>>name;
        cout<<"Enter student Roll Number:"<<endl;
        cin>>rollno;
        cout<<"Enter student Cource:"<<endl;
        cin>>course;
    }

    void Display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Course: " << course << endl;
    }
};

class Test : virtual public Student {
protected:
    int marks[3];
    
public:
    void input_marks() {
        cout<<"Enter mark1:"<<endl;
        cin>>marks[0];
        cout<<"Enter student mark2:"<<endl;
        cin>>marks[1];
        cout<<"Enter mark3:"<<endl;
        cin>>marks[2];
    }

    void display_marks() {
        cout << "Marks in 3 subjects: ";
        for (int i = 0; i < 3; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }

    int total_marks() {
        return marks[0] + marks[1] + marks[2];
    }
};

class GraceMarks :virtual public Student {
protected:
    int B;

public:
    void set_bonus_mark(int bonus) {
        B = bonus;
    }

    int get_bonus_mark() {
        return B;
    }
};

class Result : public Test, public GraceMarks {
public:
    void display_result() {
        input_details();
        display_marks();
        cout << "Bonus Mark: " << get_bonus_mark() << endl;
        int total = total_marks() + get_bonus_mark();
        cout << "Total Marks : " << total << endl;
    }
};

int main() {
    Result r;

    r.input_details();

    r.input_marks();

    r.set_bonus_mark(5);

    r.display_result();

}
