#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	
	ofstream file("student.txt");

	string name;
	int marks1, marks2, marks3;

	cout << "Enter student name: ";
	getline(cin, name);

	cout << "Enter marks of subject 1: ";
	cin >> marks1;

	cout << "Enter marks of subject 2: ";
	cin >> marks2;

	cout << "Enter marks of subject 3: ";
	cin >> marks3;

	file << name << endl;
	file << marks1 << endl;
	file << marks2 << endl;
	file << marks3 << endl;

	file.close();

	cout << "Data saved to student.txt" << endl;

	return 0;
}
