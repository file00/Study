/* Program to Compute Quotient and Remainder */
using namespace std;
#include <iostream>

int main() {
    int dividend, divisor, quotient, remainder;
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;
    
    // Computes quotient
    quotient = dividend / divisor;
    
    // Computes remainder
    remainder = dividend % divisor;

    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder << endl;
    

    return 0;
}



