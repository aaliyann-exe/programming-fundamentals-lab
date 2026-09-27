#include<iostream>
using namespace std;

int main() {

    int units;

    cout << "Enter units consumed: ";
    cin >> units;

    if (units < 0)
        cout << "Invalid units";

    else if (units <= 100) {
        int rate = 10;
        cout << "Rate per unit: Rs. " << rate << endl;
        cout << "Total bill: " << units * rate;
    }
    else if (units <= 300) {
        int rate = 15;
        cout << "Rate per unit: Rs. " << rate << endl;
        cout << "Total bill: " << units * rate;
    }
    else {
        int rate = 22;
        cout << "Rate per unit: Rs. " << rate << endl;
        cout << "Total bill: " << units * rate;
    }

    return 0;

}
