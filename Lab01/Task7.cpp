#include <iostream>
using namespace std;

int main() {
	
	const int baseFare = 80;
	const int ratePerKm = 22;
	const int SURCHARGE = 50;

	float distance, totalFare;

	cout << "Enter distance in kilometres: ";
	cin >> distance;

	totalFare = baseFare + (ratePerKm * distance) + SURCHARGE;

	cout << "Base fare: Rs. " << baseFare << endl;
	cout << "Night surcharge: Rs. " << SURCHARGE << endl;
	cout << "Total fare: Rs. " << totalFare << endl;

	return 0;
}
