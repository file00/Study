// Basic Types 
#include <iostream>
using namespace std;

int main() {
    int i;
    float f;
    double db;
    char ch = 'A';
    short a;
    long b;
    long long c;
    long double d;

    cout << "size of int = " << sizeof(i) << " bytes\n";
    cout << "size of float = " << sizeof(f) << " bytes\n";
    cout << "size of double = " << sizeof(db) << " bytes\n";
    cout << "size of char = " << sizeof(ch) << " bytes\n";
    cout << "size of short = " << sizeof(a) << " bytes\n";
    cout << "size of long = " << sizeof(b) << " bytes\n";
    cout << "size of long long = " << sizeof(c) << " bytes\n";
    cout << "size of long double = " << sizeof(d) << " bytes\n";

    return 0;
}