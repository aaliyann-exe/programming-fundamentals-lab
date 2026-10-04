#include <iostream>
using namespace std;

int main() {

    int choice;
    int recharges = 0, total = 0;

    do {

        cout << "\n--- Mobile Top-Up ---" << endl;
        cout << "1. Rs. 100 load\n2. Rs. 200 load\n3. Rs. 500 load\n4. Show Total and Exit" << endl;
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                total += 100;
                recharges++;
                cout << "Rs. 100 loaded." << endl;
                break;

            case 2:
                total += 200;
                recharges++;
                cout << "Rs. 200 loaded." << endl;
                break;

            case 3:
                total += 500;
                recharges++;
                cout << "Rs. 500 loaded." << endl;
                break;

            case 4:
                break;
                
            default:
                cout << "Invalid choice." << endl;

        }
    } while (choice != 4);

    cout << "\nRecharges done: " << recharges << endl;
    cout << "Total amount: Rs. " << total << endl;

    return 0;

}
