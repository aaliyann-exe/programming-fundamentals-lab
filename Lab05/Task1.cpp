#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    string marks, rollNo;

    ofstream file("students_list.txt");

    for (int i = 1; i <= 5; i++) {

        cout << "Enter roll number of student " << i << ": ";
        cin >> rollNo;
        cout << "Enter marks of student#" << rollNo << ": ";
        cin >> marks;

        file << rollNo << " " << marks << endl;

    }

    file.close();
    cout << "Student list saved to students_list.txt" << endl;

    return 0;

}
