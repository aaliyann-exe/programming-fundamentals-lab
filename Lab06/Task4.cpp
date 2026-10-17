#include <iostream>
using namespace std;

double addition(double a, double b) {
    return (a + b);
}

double subtraction(double a, double b) {
    return (a - b);
}

double multiplication(double a, double b) {
    return (a * b);
}

double division(double a, double b) {
    return (a / b);
}

int main() {

    double num1, num2;
    char choice;

    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;

    cout << "Select action to perform:\n+ : addition\n- : subtraction\n* : multiplication\n/ : division\n\nChoice: ";

    cin >> choice;

    switch(choice) {
        
        case '+':
            cout << "Result: " << addition(num1, num2);
            break;
        case '-':
            cout << "Result: " << subtraction(num1, num2);
            break;
        case '*':
            cout << "Result: " << multiplication(num1, num2);
            break;
        case '/':
            cout << "Result: " << division(num1, num2);
            break;
        default:
            cout << "Invalid operator.";
            break;

        }

    return 0;

}
