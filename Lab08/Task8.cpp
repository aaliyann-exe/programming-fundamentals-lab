#include <iostream>
#include <cctype>
using namespace std;

bool isValidName(const char name[]) {
    if (name[0] == '\0')
        return false;
    for (int i = 0; name[i] != '\0'; i++) {
        if (!isalpha(name[i]))
            return false;
    }
    return true;
}

int main() {

    char name[30];

    while (true) {
        cout << "Enter name: ";
        cin.getline(name, 30);

        if (isValidName(name)) {
            cout << name << " is a valid name." << endl;
            break;
        }
        cout << "Invalid name! Please try again." << endl;
    }

    return 0;

}
