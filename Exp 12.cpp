#include <iostream>
using namespace std;

class online_shopping {
protected:
    string item_name;
    int quantity;
    double unit_price;

public:
    void getShoppingDetails() {
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
    double shipping_charge;

public:
    void getShippingCharge() {
        cout << "Enter shipping charge: ";
        cin >> shipping_charge;
    }
};

class Bill : public online_shopping, public Shipping_details {
public:
    void displayBill() {
        double total_price = quantity * unit_price;
        double total_amount = total_price + shipping_charge;

        cout << " Bill Details ";
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

    b.getShoppingDetails();
    b.getShippingCharge();
    b.displayBill();

    return 0;
}
