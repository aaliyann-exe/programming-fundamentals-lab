#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    ifstream file("student_info.txt");

    if(!file) {

        cout << "File not found.";
        return 1;

    }

    string line;

    cout << "Content of student_info.txt:" << endl;

    while (getline(file, line)) {

        cout << line << endl;
        
    }

    file.close();

    return 0;

}
