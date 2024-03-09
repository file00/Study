/* Power Using pow() Function */
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double base, exp, result;
    cout << "Enter a base number: ";
    cin >> base;
    cout << "Enter an exponent: ";
    cin >> exp;
    
    // Calculates the Power
    result = pow(base, exp);
    
    cout << base << " ^ " << exp << " = " << result << endl;
    return 0;
}
