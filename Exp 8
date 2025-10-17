#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter() {
        count = 0;
    }

    Counter(int c) {
        count = c;
    }
    void display() {
        cout << "Count: " << count << endl;
    }

    Counter operator++() {
        ++count;            
        return *this;       
    }

    Counter operator++(int) {
        Counter temp = *this;
        count++;              
        return temp;          
    }
};

int main() {
    Counter c1(5); 

    cout << "Initial value: ";
    c1.display();

    ++c1;
    cout << "After prefix ++: ";
    c1.display();

    c1++;
    cout << "After postfix ++: ";
    c1.display();

}
