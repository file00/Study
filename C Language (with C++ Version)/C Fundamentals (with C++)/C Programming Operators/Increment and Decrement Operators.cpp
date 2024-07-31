/* Increment and Decrement Operators */
// Working of increment and decrement operators
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 100;
    float c = 10.5, d = 100.5;
    
    cout << fixed;
    cout.precision(6);
    
    cout << "++a = " << ++a << endl;
    cout << "--b = " << --b << endl;
    cout << "++c = " << ++c << endl;
    cout << "--d = " << --d << endl;

    return 0;
}