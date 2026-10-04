#include <iostream>
using namespace std;

int main() {

    int n, sumCubes = 0;

    cout << "Enter N: ";
    cin >> n;

    cout << "Number\tSquare\tCube" << endl;
    
    for (int i = 1; i <= n; i++) {

        cout << i << "\t" << i * i << "\t" << i * i * i << endl;
        sumCubes += i * i * i;

    }

    cout << "Sum of cubes = " << sumCubes << endl;

    return 0;

}
