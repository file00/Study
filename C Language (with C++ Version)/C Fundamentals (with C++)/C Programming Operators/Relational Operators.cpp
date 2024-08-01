/* Relational Operators */
// Working of relational operators
#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 5, c = 10;
    int a1 = a == b;
    int a2 = a == c;
    int a3 = a > b;
    int a4 = a > c;
    int a5 = a < b;
    int a6 = a < c;
    int a7 = a != b;
    int a8 = a != c; 
    int a9 = a >= b;
    int a10 = a >= c;
    int a11 = a <= b;
    int a12 = a <= c;

    cout << a << " == " << b << " is " << a1 << endl;
    cout << a << " == " << c << " is " << a2 << endl;
    cout << a << " > " << b << " is " << a3 << endl;
    cout << a << " > " << c << " is " << a4 << endl;
    cout << a << " < " << b << " is " << a5 << endl;
    cout << a << " < " << c << " is " << a6 << endl;
    cout << a << " != " << b << " is " << a7 << endl;
    cout << a << " != " << c << " is " << a8 << endl;
    cout << a << " >= " << b << " is " << a9 << endl;
    cout << a << " >= " << c << " is " << a10 << endl;
    cout << a << " <= " << b << " is " << a11 << endl;
    cout << a << " <= " << c << " is " << a12 << endl;

    return 0;
}