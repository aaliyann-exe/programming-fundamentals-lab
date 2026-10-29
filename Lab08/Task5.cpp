#include <iostream>
using namespace std;

int main() {

    const int SIZE = 20;
    int numbers[SIZE];
    int n;

    do {
        cout << "Enter how many numbers (max 20): ";
        cin >> n;
    } while (n < 1 || n > SIZE);

    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int mostRepeated = numbers[0];
    int maxCount = 0;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (numbers[j] == numbers[i])
                count++;
        }
        if (count > maxCount) {
            maxCount = count;
            mostRepeated = numbers[i];
        }
    }

    cout << "Most appeared number in array is " << mostRepeated << " and is appeared " << maxCount << " time in array" << endl;

    return 0;

}
