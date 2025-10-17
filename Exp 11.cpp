#include <iostream>
using namespace std;

class BankAccount {
protected:
    string account_number;
    float balance;

public:
    BankAccount() {
        account_number = "";
        balance = 0.0;
    }

    void inputAccountDetails() {
        cout << "Enter the Account Number: ";
        cin >> account_number;
        cout << "Enter Balance: ";
        cin >> balance;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(float amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void display() {
        cout << "Account Number: " << account_number << endl;
        cout << "Balance: " << balance << endl;
    }
};

class SavingsAccount : public BankAccount {
private:
    float rate_of_interest;

public:
    SavingsAccount() : BankAccount() {
        rate_of_interest = 0.0;
    }

    void inputSavingsDetails() {
        inputAccountDetails();
        cout << "Enter rate of interest: ";
        cin >> rate_of_interest;
    }

    void calculateInterest() {
        float interest = balance * rate_of_interest / 100;
        cout << "Interest: " << interest << endl;
    }
};

class CurrentAccount : public BankAccount {
private:
    float minimum_balance;
    float service_charge;

public:
    CurrentAccount() : BankAccount() {
        minimum_balance = 0.0;
        service_charge = 0.0;
    }

    void inputCurrentDetails() {
        inputAccountDetails();
        cout << "Enter minimum balance: ";
        cin >> minimum_balance;
        cout << "Enter service charge: ";
        cin >> service_charge;
    }

    void calculateServiceCharge() {
        if (balance < minimum_balance) {
            balance -= service_charge;
            cout << "Service charge deducted: " << service_charge << endl;
        } else {
            cout << "No service charge needed." << endl;
        }
    }
};

int main() {
    SavingsAccount s;
    cout << "Enter details for Savings Account:\n";
    s.inputSavingsDetails();
    cout<<endl;
    s.display();
    cout<<endl;
    float dep, wd;
    cout << "Enter amount to deposit: ";
    cin >> dep;
    s.deposit(dep);
    cout<<endl;
    cout << "Enter amount to withdraw: ";
    cin >> wd;
    s.withdraw(wd);
    cout<<endl;
    s.calculateInterest();
    cout<<endl;
    s.display();

    cout << "\nEnter details for Current Account:\n";
    CurrentAccount c;
    c.inputCurrentDetails();
    cout<<endl;
    c.display();

    cout << "Enter amount to withdraw: ";
    cin >> wd;
    c.withdraw(wd);

    c.calculateServiceCharge();
    cout<<endl;
    c.display();

}
