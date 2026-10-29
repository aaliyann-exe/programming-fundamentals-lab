#include <iostream>
using namespace std;

inline double pkrToUsd(double pkr) {
    return pkr / 280;
}

inline double usdToPkr(double usd) {
    return usd * 280;
}

inline double celsiusToFahrenheit(double c) {
    return c * 9.0 / 5.0 + 32;
}

inline double kmToMiles(double km) {
    return km * 0.621371;
}

inline bool isLongTrip(double km) {
    return km > 1000;
}

int main() {

    cout << "Enter 5 package prices in PKR:" << endl;
    double prices[5];
    for (int i = 0; i < 5; i++) {
        cout << "Package " << i + 1 << ": ";
        cin >> prices[i];
    }

    cout << endl << "PKR\t\tUSD" << endl;
    for (int i = 0; i < 5; i++)
        cout << prices[i] << "\t\t" << pkrToUsd(prices[i]) << endl;
    cout << endl;

    double celsius, km;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    cout << "Enter distance in km: ";
    cin >> km;

    cout << celsius << " C = " << celsiusToFahrenheit(celsius) << " F" << endl;
    cout << km << " km = " << kmToMiles(km) << " miles" << endl;
    if (isLongTrip(km))
        cout << "This is a long trip." << endl;
    else
        cout << "This is not a long trip." << endl;

    cout << "100 USD = " << usdToPkr(100) << " PKR" << endl;

    return 0;

}
