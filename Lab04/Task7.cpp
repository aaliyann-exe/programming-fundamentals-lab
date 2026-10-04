#include <iostream>
using namespace std;

int main() {

    // Pattern 1
    for (int row = 1; row <= 4; row++) {

        for (int col = 1; col <= row; col++) {
            cout << row << " ";
        }

        cout << endl;

    }
    cout << endl;

    // Pattern 2
    for (int row = 4; row >= 1; row--) {

        for (char ch = 'A'; ch < 'A' + row; ch++) {
            cout << ch << " ";
        }

        cout << endl;

    }
    cout << endl;

    // Pattern 3
    for (int row = 1; row <= 5; row++) {

        for (int col = 1; col <= 5; col++) {
            cout << row * col << "\t";
        }
        
        cout << endl;

    }

    return 0;

}
