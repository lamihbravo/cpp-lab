#include <iostream>
using namespace std;

class Clock {
private:
    int hr, min, sec;

public:
    void readTime() {
        cout << "Enter hours: ";
        cin >> hr;
        cout << "Enter minutes: ";
        cin >> min;
        cout << "Enter seconds: ";
        cin >> sec;
    }

    void showTime() {
        cout << hr << " : " << min << " : " << sec << endl;
    }

    friend Clock addTime(Clock t1, Clock t2);
};

Clock addTime(Clock t1, Clock t2) {
    Clock total;
    
    total.sec = t1.sec + t2.sec;
    total.min = t1.min + t2.min + (total.sec / 60);
    total.sec = total.sec % 60;

    total.hr = t1.hr + t2.hr + (total.min / 60);
    total.min = total.min % 60;

    return total;
}

int main() {
    Clock time1, time2, result;

    cout << " Enter First Time "<<endl;
    time1.readTime();

    cout << " Enter Second Time "<<endl;
    time2.readTime();

    result = addTime(time1, time2);

    cout << "\nFirst Time: ";
    time1.showTime();

    cout << "Second Time: ";
    time2.showTime();

    cout << "Total Time: ";
    result.showTime();

}
