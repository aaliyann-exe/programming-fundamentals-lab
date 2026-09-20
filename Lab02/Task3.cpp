#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	
	ofstream file("attendance.txt", ios::app);

	string name, date;

	cout << "Enter name: ";
	getline(cin, name);

	cout << "Enter today's date: ";
	getline(cin, date);

	file << name << " - " << date << endl;

	file.close();

	cout << "Attendance saved to attendance.txt" << endl;

	return 0;
}
