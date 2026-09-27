#include<iostream>
using namespace std;

int main() {

    string id;
    int password;

    cout << "Enter user ID: ";
    cin >> id;

    cout << "Enter password: ";
    cin >> password;

    bool idCorrect = (id == "cs101");
    bool passwordCorrect = (password == 1234);

    if (idCorrect && passwordCorrect)
        cout << "Login successful" << endl;

    else if (!idCorrect && !passwordCorrect)
        cout << "Wrong user ID and password" << endl;

    else if (!idCorrect)
        cout << "Wrong user ID" << endl;
    
    else
        cout << "Wrong password" << endl;

    return 0;

}
