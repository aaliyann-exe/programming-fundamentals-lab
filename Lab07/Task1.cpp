#include <iostream>
using namespace std;

void normalCounter() {
    int count = 0;
    count++;
    cout << "Normal count: " << count << endl;
}

void staticCounter() {
    static int count = 0;
    count++;
    cout << "Static count: " << count << endl;
}
int nextTokenNumber() {
    static int token = 100;
    token++;
    return token;
}

int main() {

    for (int i = 0; i < 3; i++)
        normalCounter();
    cout << endl;
    for (int i = 0; i < 3; i++)
        staticCounter();
    cout << endl;

    cout << "Customer 1 token: " << nextTokenNumber() << endl;
    cout << "Customer 2 token: " << nextTokenNumber() << endl;
    cout << "Customer 3 token: " << nextTokenNumber() << endl;
    
    return 0;

}