#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
    string name = "Ali";
    string program = "BSCS";
    int semester = 3;

    ofstream file("student.txt");
    file << name << endl;
    file << program << endl;
    file << semester << endl;
    file.close();

    string fileName, fileProgram;
    int fileSemester;

    ifstream inFile("student.txt");
    inFile >> fileName;
    inFile >> fileProgram;
    inFile >> fileSemester;
    inFile.close();

    cout << "Name: " << fileName << endl;
    cout << "Program: " << fileProgram << endl;
    cout << "Semester: " << fileSemester << endl;

    return 0;
}
