#include <iostream>
using namespace std;

int main() {

    const int SIZE = 10;
    int rolls[SIZE];
    int size = SIZE;

    cout << "Enter the roll numbers: ";
    for (int i = 0; i < size; i++) {
        cin >> rolls[i];
    }

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << rolls[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < size; i++) {
        int j = i + 1;
        while (j < size) {
            if (rolls[j] == rolls[i]) {
                for (int k = j; k < size - 1; k++) {
                    rolls[k] = rolls[k + 1];
                }
                size--;
            }
            else {
                j++;
            }
        }
    }

    cout << "After removing duplicates: ";
    for (int i = 0; i < size; i++) {
        cout << rolls[i] << " ";
    }
    cout << endl;
    cout << "New size = " << size << endl;

    return 0;

}
