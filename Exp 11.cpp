#include <iostream>
using namespace std;

class BankAccount {
protected:
    string account_number;
    double balance;

public:
    BankAccount(string acc_num, double bal) {
        account_number = acc_num;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(double amount) {
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
    double rate_of_interest;

public:
    SavingsAccount(string acc_num, double bal, double rate)
        : BankAccount(acc_num, bal) {
        rate_of_interest = rate;
    }

    void calculateInterest() {
        double interest = balance * rate_of_interest / 100;
        cout << "Interest: " << interest << endl;
    }
};

class CurrentAccount : public BankAccount {
private:
    double minimum_balance;
    double service_charge;

public:
    CurrentAccount(string acc_num, double bal, double min_bal, double serv_charge)
        : BankAccount(acc_num, bal) {
        minimum_balance = min_bal;
        service_charge = serv_charge;
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
    SavingsAccount s("S1001", 5000, 5);
    s.display();
    s.deposit(1000);
    s.withdraw(2000);
    s.calculateInterest();
    s.display();

    cout << endl;

    CurrentAccount c("C1001", 3000, 2000, 100);
    c.display();
    c.withdraw(1500);  
    c.calculateServiceCharge(); 
    c.display();

}
