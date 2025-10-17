#include <iostream>
using namespace std;

class Book {
private:
    int BookID;
    string BookName;
    float BookPrice;

    float total_cost(int n) {
        return BookPrice * n;
    }

public:
    void inputDetails() {
        cout << "Enter Book ID: ";
        cin >> BookID;
        cout << "Enter Book Name (no spaces): ";
        cin >> BookName;
        cout << "Enter Book Price: ";
        cin >> BookPrice;
    }

    void displayDetails() {
        cout << "\nBook Details:\n";
        cout << "Book ID: " << BookID << endl;
        cout << "Book Name: " << BookName << endl;
        cout << "Book Price: " << BookPrice << endl;
    }

    void purchase() {
        int copies;
        cout << "Enter number of copies to purchase: ";
        cin >> copies;
        cout << "Total cost to be paid: " << total_cost(copies) << endl;
    }
};

int main() {
    Book b1, b2, b3;

    cout << "Enter details of Book 1:"<<endl;
    b1.inputDetails();

    cout << "Enter details of Book 2:"<<endl;
    b2.inputDetails();

    cout << "Enter details of Book 3:"<<endl;
    b3.inputDetails();

    cout << "Displaying Book Details and Total Cost "<<endl;

    cout << "Book 1:";
    b1.displayDetails();
    b1.purchase();

    cout << "Book 2:";
    b2.displayDetails();
    b2.purchase();

    cout << "Book 3:";
    b3.displayDetails();
    b3.purchase();

}
