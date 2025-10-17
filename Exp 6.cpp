#include <iostream>
using namespace std;

class PhoneBill {
private:
    string customerName;
    string customerAddress;
    string phoneNumber;
    int callCount;

public:
    void getDetails() {
        cout << "Enter Customer Name: ";
        cin >> customerName;
        cout << "Enter Address: ";
        cin >> customerAddress;
        cout << "Enter Phone Number: ";
        cin >> phoneNumber;
        cout << "Enter Number of Calls Made: ";
        cin >> callCount;
    }

    friend void generateBill(PhoneBill p);
};

void generateBill(PhoneBill p) {
    int total = p.callCount * 2;

    cout << " Phone Bill "<<endl;
    cout << "Name: " << p.customerName << endl;
    cout << "Address: " << p.customerAddress << endl;
    cout << "Phone Number: " << p.phoneNumber << endl;
    cout << "Calls Made: " << p.callCount << endl;
    cout << "Total Amount: Rs. " << total << endl;
}

int main() {
    PhoneBill user;

    user.getDetails();     
    generateBill(user);     

}
