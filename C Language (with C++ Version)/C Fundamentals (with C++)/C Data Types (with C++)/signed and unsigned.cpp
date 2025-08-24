// signed and unsigned

#include <iostream>
using namespace std;

int main() {
    // valid codes
    unsigned int x = 35;
    int y = -35;   // signed int
    int z = 36;    // signed int

    cout << "x (unsigned int) = " << x << endl;
    cout << "y (signed int) = " << y << endl;
    cout << "z (signed int) = " << z << endl;

    // invalid code: unsigned int cannot hold negative integers
    // cout << "num = " << num << endl;

    return 0;
}