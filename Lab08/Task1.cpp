#include <iostream>
using namespace std;

int main() {

    const int SIZE = 5;
    int prices[SIZE] = {150, 200, 250, 300, 350};

    for (int i = 0; i < SIZE; i++) {
        cout << "Route " << i + 1 << ": " << prices[i] << endl;
    }

    prices[2] = 275;

    cout << "After change:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Route " << i + 1 << ": " << prices[i] << endl;
    }

    cout << "First route price = " << prices[0] << endl;
    cout << "Last route price = " << prices[SIZE - 1] << endl;

    return 0;

}
