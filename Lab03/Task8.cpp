#include <iostream>
using namespace std;

int main() {

    const double DISCOUNT_AGE = 0.50;
    const double DISCOUNT_STUDENT = 0.20;
    const double NO_DISCOUNT = 0.0;

    int ticketClass, age, numTickets;
    double ticketPrice = 0.0, discountRate = 0.0;
    char isStudent = 'n';

    cout << "Enter ticket class (1 = Economy, 2 = Gold, 3 = Platinum): ";
    cin >> ticketClass;

    switch (ticketClass) {
        case 1:
            ticketPrice = 500.0;
            break;
        case 2:
            ticketPrice = 800.0;
            break;
        case 3:
            ticketPrice = 1200.0;
            break;
        default:
            cout << "Invalid ticket class." << endl;
            return 0;
    }

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 12 && age <= 59) {
        cout << "Are you a student? (y/n): ";
        cin >> isStudent;
    }

    if (age < 12 || age >= 60) {
        discountRate = DISCOUNT_AGE;
    } else if (age >= 12 && age <= 59 && (isStudent == 'y' || isStudent == 'Y')) {
        discountRate = DISCOUNT_STUDENT;
    } else {
        discountRate = NO_DISCOUNT;
    }

    cout << "Enter number of tickets: ";
    cin >> numTickets;

    double total = ticketPrice * numTickets * (1.0 - discountRate);

    cout << "Total amount to pay: Rs. " << total << endl;

    return 0;
    
}