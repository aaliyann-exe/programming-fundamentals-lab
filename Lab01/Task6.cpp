#include <iostream>
using namespace std;

int main() {
	
	const float PI = 3.14159;
	float radius, area, circumference;

	cout << "Enter radius of the circle: ";
	cin >> radius;

	area = PI * radius * radius;
	circumference = 2 * PI * radius;

	cout << "Area: " << area << endl;
	cout << "Circumference: " << circumference << endl;

	return 0;
}
