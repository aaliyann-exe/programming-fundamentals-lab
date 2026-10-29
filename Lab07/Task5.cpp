#include <iostream>
using namespace std;

// Steps of totalBooks(3):
// totalBooks(3) = 3 + totalBooks(2)
// totalBooks(2) = 2 + totalBooks(1)
// totalBooks(1) = 1 (base case, calls stop here)
//
// Coming back: totalBooks(2) = 2 + 1 = 3
//              totalBooks(3) = 3 + 3 = 6

void countdown(int n) {
    if (n == 0) { // base case
        cout << "Library closed!" << endl;
        return;
    }
    cout << n << " minutes left" << endl;
    countdown(n - 1); // recursive case
}

int totalBooks(int n) {
    if (n == 1) // base case
        return 1;
    return n + totalBooks(n - 1); // recursive case
}

int factorial(int n) {
    if (n <= 1) // base case
        return 1;
    return n * factorial(n - 1); // recursive case
}

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;

    countdown(n);
    cout << "Total books after " << n << " days = " << totalBooks(n) << endl;
    cout << "Ways to place " << n << " books on a shelf = " << factorial(n) << endl;

    return 0;

}
