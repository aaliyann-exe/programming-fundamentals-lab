#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    ofstream outFile("student_info.txt", ios::out | ios::trunc);

    if (!outFile.is_open()) {

        cout << "File not found." << endl;
        return 1;
        
    }

    outFile << "File has been reset." << endl;
    outFile.close();

    ifstream inFile("student_info.txt");

    if (!inFile.is_open()) {

        cout << "File not found." << endl;
        return 1;

    }

    string line;

    cout << "Updated content of student_info.txt:" << endl;

    while (getline(inFile, line)) {

        cout << line << endl;

    }

    inFile.close();

    return 0;`

}
