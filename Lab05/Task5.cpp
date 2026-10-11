#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    ofstream outFile("student_info.txt", ios::app);

    if (!outFile.is_open()) {

        cout << "Error: could not open student_info.txt" << endl;
        return 1;

    }

    string phone, email;

    cout << "Enter phone number: ";
    getline(cin, phone);
    cout << "Enter email: ";
    getline(cin, email);

    outFile << phone << endl;
    outFile << email << endl;

    outFile.close();
    cout << "Additional information appended successfully." << endl;

    ifstream inFile("student_info.txt");

    if (!inFile.is_open()) {

        cout << "File not found." << endl;
        return 1;
        
    }

    string line;

    cout << "\nContent of student_info.txt:" << endl;

    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();

    return 0;

}
