#include <iostream>
using namespace std;

int main() {

	int marks1, marks2, marks3, total;
	float percentage;

	cout << "Enter marks of subject 1: ";
	cin >> marks1;

	cout << "Enter marks of subject 2: ";
	cin >> marks2;

	cout << "Enter marks of subject 3: ";
	cin >> marks3;

	total = marks1 + marks2 + marks3;

	percentage = (total / 300.0) * 100;

	cout << "Total marks: " << total << " out of 300" << endl;
	cout << "Percentage: " << percentage << " %" << endl;

	return 0;
}
