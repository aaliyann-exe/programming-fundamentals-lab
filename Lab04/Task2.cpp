#include <iostream>
using namespace std;

int main() {

    int age, pin, confirmPin;
    int attempts = 1;

    // (a) Age
    cout << "Enter your age: ";
    cin >> age;
    while (age < 18 || age > 60) {
        cout << "Invalid! Age must be between 18 and 60: ";
        cin >> age;
    }

    // (b) PIN
    do {
        cout << "Create a 4-digit PIN: ";
        cin >> pin;
        if (pin < 1000 || pin > 9999)
            cout << "Invalid PIN! It must be between 1000 and 9999." << endl;
    } while (pin < 1000 || pin > 9999);

    // (c) confirm PIN
    cout << "Re-enter PIN to confirm: ";
    cin >> confirmPin;
    while (confirmPin != pin && attempts < 3) {
        cout << "PIN does not match. Try again: ";
        cin >> confirmPin;
        attempts++;
    }

    if (confirmPin == pin)
        cout << "Account created" << endl;
    else
        cout << "Registration failed" << endl;

    return 0;
    
}
