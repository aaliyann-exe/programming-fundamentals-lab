#include <iostream>
#include <string>
using namespace std;

int main() {

    // // 1. Implicit Conversion (int -> double)
    // int count = 10;
    // float total = count; // Automatic widening
    // cout << "Implicit (int to double): " << total << '\n';

    // // 2. Explicit Conversion using static_cast (double -> int)
    // double price = 19.99;
    // int roundedPrice = static_cast<int>(price); // Safe, explicit truncation
    // cout << "static_cast (double to int): " << roundedPrice << '\n';

    // // 3. String to Integer using stoi
    // string numStr = "42";
    // int parsedInt = stoi(numStr);
    // cout << "stoi (\"42\" to int): " << parsedInt + 8 << '\n'; // Outputs 50

    // // 4. Integer/Float to String using to_string
    // int score = 95;
    // string scoreStr = to_string(score);
    // string message = "Score: " + scoreStr;
    // cout << "to_string: " << message << '\n';






    string name = "aimi likes lobia";

    // string func 1:
   cout<< name.length();

    // string func 2:
cout << name.substr(1, 3);

    // string func 3;
    cout << name.find("lobia");















    return 0;
}
