#include <iostream>
using namespace std;

int main() {

    const int SIZE = 10;
    int tickets[SIZE];

    for (int i = 0; i < SIZE; i++) {
        cout << "Enter ticket " << i + 1 << ": ";
        cin >> tickets[i];
    }

    int oddSum = 0, evenSum = 0;
    int oddCount = 0, evenCount = 0;

    for (int i = 0; i < SIZE; i++) {
        if (tickets[i] % 2 == 0) {
            evenSum += tickets[i];
            evenCount++;
        }
        else {
            oddSum += tickets[i];
            oddCount++;
        }
    }

    cout << "Sum of odd numbers = " << oddSum << " (" << oddCount << " tickets)" << endl;
    cout << "Sum of even numbers = " << evenSum << " (" << evenCount << " tickets)" << endl;

    return 0;

}
