#include <iostream>
using namespace std;

void deposit(double &balance, double amount) {
    balance += amount;
}

bool withdraw(double &balance, double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        return true;
    }
    return false;
}

// Gives interest, tax and net balance back using reference parameters
void accountSummary(double balance, double &interest, double &tax, double &netBalance) {
    interest = balance * 0.05;
    tax = interest * 0.10;
    netBalance = balance + interest - tax;
}

void swapAccounts(double &a, double &b) {
    double temp = a;
    a = b;
    b = temp;
}

int main() {

    double balance = 0;
    double secondBalance = 500; // balance of the second account
    int choice;

    do {
        cout << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Summary" << endl;
        cout << "4. Swap with second account" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            double amount;
            cout << "Enter amount to deposit: ";
            cin >> amount;
            deposit(balance, amount);
            cout << "Current balance: " << balance << endl;
        }
        else if (choice == 2) {
            double amount;
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if (withdraw(balance, amount))
                cout << "Withdrawal successful. Current balance: " << balance << endl;
            else
                cout << "Withdrawal failed: invalid amount or not enough balance." << endl;
        }
        else if (choice == 3) {
            double interest, tax, netBalance;
            accountSummary(balance, interest, tax, netBalance);
            cout << "Balance: " << balance << endl;
            cout << "Interest (5%): " << interest << endl;
            cout << "Tax (10% of interest): " << tax << endl;
            cout << "Net balance: " << netBalance << endl;
        }
        else if (choice == 4) {
            swapAccounts(balance, secondBalance);
            cout << "Accounts swapped." << endl;
            cout << "First account: " << balance << endl;
            cout << "Second account: " << secondBalance << endl;
        }
        else if (choice != 5)
            cout << "Invalid choice, try again." << endl;
    } while (choice != 5);

    cout << "Goodbye!" << endl;

    return 0;

}
