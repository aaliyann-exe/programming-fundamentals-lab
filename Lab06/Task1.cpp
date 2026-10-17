#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.1415;

double calcCircum(double radius) {

    double circumference = 2 * PI * radius;
    return circumference;

}

double calcArea(double radius) {
    
    double area = PI * pow(radius, 2);
    return area;

}

int main() {

    double radius;

    cout << "Enter radius of the circle: ";
    cin >> radius;

    cout << "The circumference of the circle is: " << calcCircum(radius) << endl;
    cout << "The area of the circle is: " << calcArea(radius) << endl;

    return 0;

}
