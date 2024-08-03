/* sizeof Operator */

#include <iostream>
using namespace std;

int main() {
    int a;
    float b;
    double c;
    char d;
    
    cout << "Size of int = " << sizeof(a) << " bytes" << endl;
    cout << "Size of float = " << sizeof(b) << " bytes" << endl;
    cout << "Size of double = " << sizeof(c) << " bytes" << endl;
    cout << "Size of char = " << sizeof(d) << " bytes" << endl;
    
    return 0;
}