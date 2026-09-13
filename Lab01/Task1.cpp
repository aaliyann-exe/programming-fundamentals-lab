#include <iostream>
using namespace std;

int main() {
	
	int breakfast, lunch, dinner, total;

	cout << "Enter cost of breakfast: ";
	cin >> breakfast;

	cout << "Enter cost of lunch: ";
	cin >> lunch;

	cout << "Enter cost of dinner: ";
	cin >> dinner;

	total = breakfast + lunch + dinner;

	cout << "Total bill: " << total << endl;

	return 0;
}
