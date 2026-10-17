#include <iostream>
using namespace std;

void swapper(int &a, int &b) {

    int temp;

    temp = a;
    a = b;
    b = temp;

}

int main() {

    int num1, num2;

    cout << "Enter number 1: ";
    cin >> num1;

    cout << "Enter number 2: ";
    cin >> num2;

    swapper(num1, num2);

    cout << "After swapping:" << endl;
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2;

    return 0;

}
