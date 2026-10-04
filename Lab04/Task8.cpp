#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i <= 50; i++) {

        cout << num * i << "\t";

        if (i % 10 == 0)
            cout << endl;

    }

    return 0;
    
}
