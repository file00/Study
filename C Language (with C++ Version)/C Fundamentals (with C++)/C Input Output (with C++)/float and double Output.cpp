// float and double Output
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float number1 = 13.5f;
    double number2 = 12.4;

    cout << fixed << setprecision(6);
    cout << "number1 = " << number1 << "\n";
    cout << "number2 = " << number2;

    return 0;
}