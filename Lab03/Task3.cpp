#include<iostream>
using namespace std;

int main() {

    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
        cout << "You are eligible.";

    else
        cout << "You are not eligible yet. Please wait " << 18 - age << " more year(s).";

    return 0;

}
