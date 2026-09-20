#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string data, result;
	int number;

	cout << "Simulate some data being entered: ";
	cin >> data;

	number = stoi(data);
	number = number + 10;
	result = to_string(number);

	cout << "Value read as string: " << data << endl;
	cout << "After adding 10: " << result << endl;

	return 0;
}
