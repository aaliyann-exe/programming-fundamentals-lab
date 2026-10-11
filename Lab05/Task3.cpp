#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    ofstream file;
    file.open("student_info.txt");
    
    string name, rollNo, department;

    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter roll number: ";
    getline(cin, rollNo);
    cout << "Enter department: ";
    getline(cin, department);

    file << name << endl;
    file << rollNo << endl;
    file << department << endl;

    file.close();
    cout << "Student information saved." << endl;

    return 0;

}
