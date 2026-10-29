#include <iostream>
using namespace std;

int main() {

    double prices[6] = {200, 150, 300, 120, 500, 250};

    cout << "Old prices: ";
    for (double p : prices) {
        cout << p << " ";
    }
    cout << endl;

    for (double &p : prices) {
        p = p * 1.10;
    }

    cout << "New prices: ";
    for (auto p : prices) {
        cout << p << " ";
    }
    cout << endl;

    return 0;

}
