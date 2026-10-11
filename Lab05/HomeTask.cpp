#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    int choice, marks;
    string name;

    do {

        cout << "\n--- Student Records ---" << endl;
        cout << "1. Add a new student\n2. Display all students\n3. Show average marks\n4. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {

            case 1: {

                ofstream outFile("records.txt", ios::app);

                if (!outFile) {
                    cout << "File not found." << endl;
                    break;
                }

                cout << "Enter name: ";
                cin >> name;
                cout << "Enter marks: ";
                cin >> marks;
                while (marks < 0 || marks > 100) {
                    cout << "Marks must be between 0 and 100: ";
                    cin >> marks;
                }

                outFile << name << " " << marks << endl;
                outFile.close();
                cout << "Student added." << endl;
                break;
                
            }

            case 2: {

                ifstream inFile("records.txt");

                if (!inFile.is_open()) {
                    cout << "No records found. Add a student first." << endl;
                    break;
                }

                int count = 0;

                cout << "Name\tMarks" << endl;
                while (inFile >> name >> marks) {
                    cout << name << "\t" << marks << endl;
                    count++;
                }

                if (count == 0)
                    cout << "The file is empty." << endl;

                inFile.close();
                break;

            }

            case 3: {

                ifstream inFile("records.txt");

                if (!inFile.is_open()) {
                    cout << "No records found. Add a student first." << endl;
                    break;
                }

                int total = 0, count = 0;

                while (inFile >> name >> marks) {
                    total += marks;
                    count++;
                }

                if (count > 0)
                    cout << "Average marks of " << count << " students: " << (double)total / count << endl;
                else
                    cout << "The file is empty." << endl;

                inFile.close();
                break;

            }

            case 4:
                cout << "Goodbye." << endl;
                break;

            default:
                cout << "Invalid choice." << endl;

        }
        
    } while (choice != 4);

    return 0;

}
