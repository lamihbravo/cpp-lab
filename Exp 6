#include <iostream>
using namespace std;

class TelephoneBill {
private:
    string Name;
    string Address;
    string TelNo;
    int noOfCalls;

public:
    void inputDetails() {
        cout << "Enter Name: ";
        cin >> Name;
        cout << "Enter Address: ";
        cin >> Address;
        cout << "Enter Telephone Number: ";
        cin >> TelNo;
        cout << "Enter Number of Calls: ";
        cin >> noOfCalls;
    }

    friend void calculateBill(TelephoneBill t);
};

void calculateBill(TelephoneBill t) {
    int totalAmount = t.noOfCalls * 2;  // Rs. 2 per call

    cout << "\n--- Telephone Bill ---\n";
    cout << "Name: " << t.Name << endl;
    cout << "Address: " << t.Address << endl;
    cout << "Telephone No.: " << t.TelNo << endl;
    cout << "Number of Calls: " << t.noOfCalls << endl;
    cout << "Total Amount to be Paid: Rs. " << totalAmount << endl;
}

int main() {
    TelephoneBill customer;

    customer.inputDetails();   
    calculateBill(customer);   

}
