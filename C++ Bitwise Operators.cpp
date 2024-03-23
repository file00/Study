/* C++ Bitwise Operators */
#include <iostream>
using namespace std;

int main() {
    // declare variables
    int a = 12, b = 25, c = 35, d = -150;
    
    // declaring two integer variables
    int num = 212, i;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "\na & b = " << (a & b) << endl; // AND
    cout << "a | b = " << (a | b) << endl; // OR
    cout << "a ^ b = " << (a ^ b) << endl; // XOR
    
    // Bitwise Complement
    cout << "~(" << c << ") = " << (~c) << endl;
    cout << "~(" << d << ") = " << (~d) << endl;
    
    // Shift operator
    cout << "\nShift Right:" << endl;  // Shift Right Operation

    // Using for loop for shifting num right from 0 bit to 3 bits 
    for (i = 0; i < 4; i++) {
        cout << "212 >> " << i << " = " << (212 >> i) << endl;
    }

    cout << "\nShift Left:" << endl;  // Shift Left Operation

    // Using for loop for shifting num left from 0 bit to 3 bits
    for (i = 0; i < 4; i++) {
        cout << "212 << " << i << " = " << (212 << i) << endl;
    }

    return 0;
}
