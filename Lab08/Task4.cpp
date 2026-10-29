#include <iostream>
using namespace std;

int main() {

    const int SIZE = 10;
    int cars[SIZE];

    for (int i = 0; i < SIZE; i++) {
        cout << "Enter car number of slot " << i + 1 << " (0 for empty): ";
        cin >> cars[i];
    }

    int key;
    cout << "Enter car number to search: ";
    cin >> key;

    bool found = false;
    for (int i = 0; i < SIZE; i++) {
        if (cars[i] == key) {
            cout << "Car is parked in slot " << i + 1 << endl;
            found = true;
            break;
        }
    }
    if (!found)
        cout << "Car not found" << endl;

    int empty = 0;
    for (int i = 0; i < SIZE; i++) {
        if (cars[i] == 0)
            empty++;
    }
    cout << "Empty slots = " << empty << endl;

    return 0;

}
