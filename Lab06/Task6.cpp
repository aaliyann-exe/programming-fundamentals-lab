#include <iostream>
#include <string>
using namespace std;

int age, oxygenLevel, days;
char severity;
float dailyRate;
string name, disease;

void inputPatientData() {

    cout << "Enter patient name: ";
    getline(cin, name);
    cout << "Enter age: ";
    cin >> age;
    cin.ignore();
    cout << "Enter disease: ";
    getline(cin, disease);

}

float calculateBill(int days, float dailyRate) {
    return days * dailyRate;
}

string assignWard(char severityLevel) {

    if(severityLevel == 'H' || severityLevel == 'h')
        return "ICU";
    else if(severityLevel == 'M' || severityLevel == 'm')
        return "Private";
    else
        return "General";

}

bool isCritical(int oxygenLevel) {

    if(oxygenLevel < 90)
        return true;
    else
        return false;

}

void displayPatientReport() {

    cout << "\n--- Patient Report ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Disease: " << disease << endl;
    cout << "Ward: " << assignWard(severity) << endl;
    cout << "Oxygen Level: " << oxygenLevel << "%" << endl;

    if(isCritical(oxygenLevel))
        cout << "Condition: Critical" << endl;
    else
        cout << "Condition: Stable" << endl;

    cout << "Total Bill: " << calculateBill(days, dailyRate);

}

int main() {

    inputPatientData();

    cout << "Enter severity level (L = Low, M = Medium, H = High): ";
    cin >> severity;
    cout << "Enter oxygen level: ";
    cin >> oxygenLevel;
    cout << "Enter number of days admitted: ";
    cin >> days;
    cout << "Enter daily rate: ";
    cin >> dailyRate;

    displayPatientReport();

    return 0;

}
