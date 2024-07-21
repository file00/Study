/* Basic Types */
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
    
    cout << "size of int" << " = " << sizeof(i) << " bytes" << endl;
    cout << "size of float" << " = " << sizeof(f) << " bytes" << endl;
    cout << "size of double" << " = " << sizeof(db) << " bytes" << endl;
    cout << "size of char" << " = " << sizeof(ch) << " bytes" << endl;
    cout << "size of short" << " = " << sizeof(a) << " bytes" << endl;
    cout << "size of long" << " = " << sizeof(b) << " bytes" << endl;
    cout << "size of long long" << " = " << sizeof(c) << " bytes" << endl;
    cout << "size of long double" << " = " << sizeof(d) << " bytes" << endl;
    // printf("size of int = %ld bytes\n", sizeof(i));
    // printf("size of float = %ld bytes\n", sizeof(f));
    // printf("size of double = %ld bytes\n", sizeof(db));
    // printf("size of char = %ld bytes\n", sizeof(ch));
    // printf("size of short = %ld bytes\n", sizeof(a));
    // printf("size of long = %ld bytes\n", sizeof(b));
    // printf("size of long long = %ld bytes\n", sizeof(c));
    // printf("size of long double= %ld bytes\n", sizeof(d));
    

    return 0;
}

