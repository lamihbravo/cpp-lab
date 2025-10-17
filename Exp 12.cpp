#include <iostream>
using namespace std;

class online_shopping {
protected:
    string item_name;
    int quantity;
    float unit_price;

public:
    void input() {
        cout << "Enter item name: ";
        cin >> item_name;
        cout << "Enter quantity: ";
        cin >> quantity;
        cout << "Enter unit price: ";
        cin >> unit_price;
    }
};

class Shipping_details {
protected:
    float shipping_charge;

public:
    void input_charge() {
        cout << "Enter shipping charge: ";
        cin >> shipping_charge;
    }
};

class Bill : public online_shopping, public Shipping_details {
public:
    void display() {
        float total_price = quantity * unit_price;
        float total_amount = total_price + shipping_charge;
        cout<<endl;
        cout << "Bill Details "<<endl;
        cout << "Item Name: " << item_name << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Unit Price: " << unit_price << endl;
        cout << "Total Price: " << total_price << endl;
        cout << "Shipping Charge: " << shipping_charge << endl;
        cout << "Total Amount to Pay: " << total_amount << endl;
    }
};

int main() {
    Bill b;

    b.input();
    b.input_charge();
    b.display();

    return 0;
}
