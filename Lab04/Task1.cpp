#include <iostream>
using namespace std;

int main() {

    const int TOTAL_PAGES = 200;
    const int READ_SPEED = 40;
    int pagesRead = 0, day = 0;

    while (pagesRead < TOTAL_PAGES) {
        
        pagesRead += READ_SPEED;
        day++;
        cout << "Day " << day << ": " << pagesRead << " pages read" << endl;

    }

    cout << "Book finished in " << day << " days" << endl;

    return 0;

}
