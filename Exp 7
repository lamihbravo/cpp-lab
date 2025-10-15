#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    void inputTime() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
    }

    void displayTime() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    friend Time sumTime(Time t1, Time t2);
};

Time sumTime(Time t1, Time t2) {
    Time t;
    t.seconds = t1.seconds + t2.seconds;
    t.minutes = t1.minutes + t2.minutes + t.seconds / 60;
    t.seconds = t.seconds % 60;
    t.hours = t1.hours + t2.hours + t.minutes / 60;
    t.minutes = t.minutes % 60;
    return t;
}

int main() {
    Time t1, t2, t3;

    cout << "Enter first time:\n";
    t1.inputTime();

    cout << "\nEnter second time:\n";
    t2.inputTime();

    t3 = sumTime(t1, t2);

    cout << "\nFirst Time: ";
    t1.displayTime();

    cout << "Second Time: ";
    t2.displayTime();

    cout << "Sum of Time: ";
    t3.displayTime();

    return 0;
}
