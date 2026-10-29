#include <iostream>
using namespace std;

void inputRuns(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter runs of player " << i + 1 << ": ";
        cin >> arr[i];
        while (arr[i] < 0) {
            cout << "Runs cannot be negative! Enter again: ";
            cin >> arr[i];
        }
    }
}

void displayRuns(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Player " << i + 1 << ": " << arr[i] << endl;
    }
}

int findHighest(const int arr[], int size) {
    int highest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > highest)
            highest = arr[i];
    }
    return highest;
}

int findLowest(const int arr[], int size) {
    int lowest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < lowest)
            lowest = arr[i];
    }
    return lowest;
}

int calculateTotal(const int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

double calculateAverage(const int arr[], int size) {
    return static_cast<double>(calculateTotal(arr, size)) / size;
}

int searchRuns(const int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int countHalfCenturies(const int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 50)
            count++;
    }
    return count;
}

void addBonusRuns(int arr[], int size, int bonus) {
    for (int i = 0; i < size; i++) {
        arr[i] += bonus;
    }
}

int main() {

    const int SIZE = 11;
    int runs[SIZE] = {0};

    inputRuns(runs, SIZE);
    cout << endl << "Scoreboard:" << endl;
    displayRuns(runs, SIZE);

    int player, newRuns;
    cout << endl << "Enter player number to correct (1-" << SIZE << "): ";
    cin >> player;
    while (player < 1 || player > SIZE) {
        cout << "Invalid player number! Enter again: ";
        cin >> player;
    }
    cout << "Enter corrected runs: ";
    cin >> newRuns;
    while (newRuns < 0) {
        cout << "Runs cannot be negative! Enter again: ";
        cin >> newRuns;
    }
    runs[player - 1] = newRuns;

    cout << endl << "After correction:" << endl;
    displayRuns(runs, SIZE);

    int key;
    cout << endl << "Enter runs to search: ";
    cin >> key;
    int index = searchRuns(runs, SIZE, key);
    if (index != -1)
        cout << "Player " << index + 1 << " scored " << key << " runs" << endl;
    else
        cout << "No player scored " << key << " runs" << endl;

    int bonus = 2;
    addBonusRuns(runs, SIZE, bonus);
    cout << endl << "After adding " << bonus << " bonus runs:" << endl;
    displayRuns(runs, SIZE);

    cout << endl << "Final runs:" << endl;
    for (int r : runs) {
        cout << r << " ";
    }
    cout << endl;

    int thirtyPlus = 0;
    for (int r : runs) {
        if (r >= 30)
            thirtyPlus++;
    }
    cout << "Players with 30 or more runs = " << thirtyPlus << endl;

    cout << endl << "Report:" << endl;
    cout << "Total runs = " << calculateTotal(runs, SIZE) << endl;
    cout << "Highest score = " << findHighest(runs, SIZE) << endl;
    cout << "Lowest score = " << findLowest(runs, SIZE) << endl;
    cout << "Average = " << calculateAverage(runs, SIZE) << endl;
    cout << "Players with 50 or more runs = " << countHalfCenturies(runs, SIZE) << endl;

    return 0;

}
