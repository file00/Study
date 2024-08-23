/* Assignment Operators */

#include <iostream>
using namespace std;

int main() {
    int a, b;

    a = 2, b = 7;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "\nAfter a += b;" << endl;

    // assigning the sum of a and b to a
    a += b;  // a = a + b
    cout << "a = " << a << endl;

    return 0;
}
