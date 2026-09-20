#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	
	ifstream file("student.txt");

	string line;

	while (getline(file, line)) {
		cout << line << endl;
	}

	file.close();

	return 0;
}
