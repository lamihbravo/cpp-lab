#include <iostream>
using namespace std;

class Count {
    int num;

public:
    Count(int n = 0) {
        num = n;
    }

    void show() {
        cout << "Value: " << num << endl;
    }

    Count operator++() {
        num++;
        return *this;
    }

    Count operator++(int) {
        Count temp = *this;
        num++;
        return temp;
    }
};

int main() {
    int m;
    cout << "Enter starting number: ";
    cin >> m;

    Count c(m);

    cout << "Initial value:\n";
    c.show();

    ++c;
    cout << "After prefix ++:\n";
    c.show();

    c++; 
    cout << "After postfix ++:\n";
    c.show();

    return 0;
}
