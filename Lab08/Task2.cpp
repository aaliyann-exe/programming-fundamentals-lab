#include <iostream>
using namespace std;

int main() {

    const int SIZE = 10;
    int runs[SIZE];

    for (int i = 0; i < SIZE; i++) {
        cout << "Enter runs of over " << i + 1 << ": ";
        cin >> runs[i];
    }

    int total = 0;
    for (int i = 0; i < SIZE; i++) {
        total += runs[i];
    }
    double average = static_cast<double>(total) / SIZE;

    int highest = runs[0], highestOver = 1;
    int lowest = runs[0], lowestOver = 1;
    int count = 0;

    for (int i = 0; i < SIZE; i++) {
        if (runs[i] > highest) {
            highest = runs[i];
            highestOver = i + 1;
        }
        if (runs[i] < lowest) {
            lowest = runs[i];
            lowestOver = i + 1;
        }
        if (runs[i] >= 10)
            count++;
    }

    cout << "Total runs = " << total << endl;
    cout << "Average per over = " << average << endl;
    cout << "Highest runs = " << highest << " (Over " << highestOver << ")" << endl;
    cout << "Lowest runs = " << lowest << " (Over " << lowestOver << ")" << endl;
    cout << "Overs with 10 or more runs = " << count << endl;

    return 0;

}
