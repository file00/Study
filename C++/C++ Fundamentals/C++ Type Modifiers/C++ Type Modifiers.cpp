/* C++ Type Modifiers */
#include <iostream>
using namespace std;\

int main() {
    // small integer
    short a = 12345;
    
    cout << a << endl;

    // large integer 
    long b = 123456;
    
    cout << b << endl;

    // large floating-point number 
    long double c = 0.333333333333333333L;
    
    cout << c << endl;

    // long long int
    long long num = 12345678;
    
    cout << num << endl;

    // positive valued integer 
    signed int x = 23;
    
    cout << x << endl;

    // negative valued integer
    signed int y = -13;
    
    cout << y << endl;

    // zero-valued integer
    signed int z = 0;
    
    cout << z << endl;

    // positive valued integer
    unsigned int X = 2;
    unsigned int Y = 0;
    
    cout << X << endl;
    cout << Y << endl;

    // plain char
    char plain_1 = 65;
    char plain_2 = 0;
    
    cout << plain_1 << endl;
    cout << plain_2 << endl;

    // plain char with negative value
    // might cause problems with some compilers
    char plain_3 = -56;
    
    cout << plain_3 << endl;
    
    // signed char
    signed char  sin_1 = 12;
    signed char  sin_2 = 0;
    signed char  sin_3 = -12;
    
    cout << sin_1 << endl;
    cout << sin_2 << endl;
    cout << sin_3 << endl;
    
    // unsigned char
    unsigned char  unsin_1 = 85;
    unsigned char  unsin_2 = 0;
    
    cout << unsin_1 << endl;
    cout << unsin_2 << endl;
    
    return 0;
}