#include<iostream>
using namespace std;

int main() {

    int bill;
    int discount = 0;

    cout << "Enter bill amount: ";
    cin >> bill;
    discount = bill * 0.10;


    if (bill > 5000) {
        cout << "Discount: " << discount;
        bill = bill - discount;
        cout << "\nAmount payable: " << bill;
    }
    
    else {
        cout << "Amount payable: " << bill;
    }

    return 0;

}