#include <iostream>
using namespace std;

int main() {

    int students, marks;
    int gradeA = 0, passed = 0, failed = 0;

    cout << "How many students are in the class? ";
    cin >> students;

    while (students < 1) {
        cout << "Invalid! Enter at least 1 student: ";
        cin >> students;
    }

    for (int i = 1; i <= students; i++) {

        cout << "Enter marks of student " << i << ": ";
        cin >> marks;
        while (marks < 0 || marks > 100) {
            cout << "Invalid! Marks must be between 0 and 100: ";
            cin >> marks;
        }

        if (marks >= 80)
            gradeA++;

        if (marks >= 50)
            passed++;
        else
            failed++;
        
    }

    cout << "Grade A: " << gradeA << endl;
    cout << "Passed: " << passed << endl;
    cout << "Failed: " << failed << endl;

    return 0;

}
