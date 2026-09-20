#include <iostream>
#include <string>
using namespace std;

int main() {

    string fullName;

    cout << "Enter your full name: ";
    getline(cin, fullName);

    int totalChars = fullName.length();
    cout << "Total number of characters: " << totalChars << endl;

    string upperName = fullName;

    for (int i = 0; i < upperName.length(); i++) {
        upperName[i] = toupper(upperName[i]);
    }

    cout << "Name in uppercase: " << upperName << endl;

    string firstThree = fullName.substr(0, 3);
    cout << "First 3 letters: " << firstThree << endl;

    return 0;
	
}