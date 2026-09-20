#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream inFile("marks.txt");
    ofstream outFile("results.txt", ios::app); // bug 1: semicolon was missing, and it was not in append mode

    string name;
    int score1, score2, score3;
    inFile >> name >> score1 >> score2 >> score3;

    int total = score1 + score2 + score3;
    float average = total / 3.0; // bug 2: average often comes in decimals so we use float instead of integer

    if (average >= 50) { // bug 3: '=' is for assigning variables, while '==' or '>="" is for comparison
        cout << name << " passed with average " << average << endl;
    }

    outFile << name << ", " << average << endl;

    inFile.close();
    outFile.close();

    return 0;

}