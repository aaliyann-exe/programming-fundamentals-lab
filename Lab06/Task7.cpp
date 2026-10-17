#include <iostream>
using namespace std;

float largerDistance(float d1, float d2) {

    if(d1 > d2)
        return d1;
    else
        return d2;

}

int main() {

    float d1, d2;

    cout << "Enter distance 1 (in meters): ";
    cin >> d1;
    cout << "Enter distance 2 (in meters): ";
    cin >> d2;

    cout << "The larger distance is: " << largerDistance(d1, d2) << " meters";

    return 0;

}
