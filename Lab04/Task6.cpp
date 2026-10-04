#include <iostream>
using namespace std;

int main() {

    const int SENTINEL = 0;
    int price, items = 0, total = 0, highest = 0;

    cout << "Enter item price (0 to stop): ";
    cin >> price;

    while (price != SENTINEL) {

        total += price;
        items++;
        if (price > highest)
            highest = price;

        cout << "Enter item price (0 to stop): ";
        cin >> price;

    }

    if (items > 0) {

        float average = (float)total / items;
        float payable = total;

        cout << "Number of items: " << items << endl;
        cout << "Total: Rs. " << total << endl;
        cout << "Highest price: Rs. " << highest << endl;
        cout << "Average price: Rs. " << average << endl;

        if (total > 1000) {
            float discount = total * 0.10;
            payable = total - discount;
            cout << "Discount (10%): Rs. " << discount << endl;
        }

        cout << "Payable amount: Rs. " << payable << endl;

    } else {
        cout << "No items entered." << endl;
    }

    return 0;

}
