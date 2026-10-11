#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    ifstream file("students_list.txt");

    if(!file) {

        cout << "No file found.";
        return 1;

    }

    string rollNo, marks;
    int count = 0;

    cout << "Student\tRoll#\tMarks" << endl;

    while (file >> rollNo >> marks) {

        count++;
        cout << count << "\t" << rollNo << "\t" << marks << endl;

    }

    file.close();
    cout << "Total students: " << count << endl;

    return 0;

}
