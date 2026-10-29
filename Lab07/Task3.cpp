#include <iostream>
#include <string>
using namespace std;

// How does the compiler know which function to call?
// It compares the number and types of the arguments in the call with the
// parameter lists of the functions that have the same name, and picks the match.
// int calculateBill(double) and double calculateBill(double) cannot exist together
// because they have the same name and parameters, and only the return type is
// different. The compiler does not look at the return type, so the call would be unclear.

// One item
double calculateBill(double price) {
    return price;
}

// Many items
double calculateBill(double price, int quantity) {
    return price * quantity;
}

// Many items with discount
double calculateBill(double price, int quantity, double discountPercent) {
    double total = price * quantity;
    return total - total * discountPercent / 100;
}

// Walk-in customer
void printReceipt(string customerName, double bill) {
    cout << "Receipt for " << customerName << " (walk-in): " << bill << endl;
}

// Registered customer
void printReceipt(int customerId, double bill) {
    cout << "Receipt for customer ID " << customerId << " (registered): " << bill << endl;
}

int main() {

    int type;
    double price, bill;

    cout << "1. One item" << endl;
    cout << "2. Many items" << endl;
    cout << "3. Many items with discount" << endl;
    cout << "Enter type of sale: ";
    cin >> type;

    cout << "Enter price of one item: ";
    cin >> price;

    if (type == 1)
        bill = calculateBill(price);
    else if (type == 2) {
        int quantity;
        cout << "Enter quantity: ";
        cin >> quantity;
        bill = calculateBill(price, quantity);
    }
    else if (type == 3) {
        int quantity;
        double discount;
        cout << "Enter quantity: ";
        cin >> quantity;
        cout << "Enter discount percent: ";
        cin >> discount;
        bill = calculateBill(price, quantity, discount);
    }
    else {
        cout << "Invalid type of sale." << endl;
        return 0;
    }

    int customerType;
    cout << "1. Walk-in customer" << endl;
    cout << "2. Registered customer" << endl;
    cout << "Enter customer type: ";
    cin >> customerType;

    if (customerType == 1) {
        string name;
        cout << "Enter customer name: ";
        cin >> name;
        printReceipt(name, bill);
    }
    else if (customerType == 2) {
        int id;
        cout << "Enter customer ID: ";
        cin >> id;
        printReceipt(id, bill);
    }
    else
        cout << "Invalid customer type." << endl;

    return 0;

}
