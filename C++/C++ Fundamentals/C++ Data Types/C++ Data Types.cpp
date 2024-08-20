/* C++ Data Types */

#include <iostream>
using namespace std;

int main() {
    // C++ int
    int age = 13;
    int salary = 85000;
    
    cout << age << endl;
    cout << salary << endl;
    
    // C++ float and double
    float area = 64.74;
    double volume = 134.64534;
    double distance = 45E12;    // 45E12 is equal to 45*10^12
    
    cout << area << endl;
    cout << volume << endl;
    cout << distance << endl;
    
    // C++ char
    char test = 'h';
    
    cout << test << endl;
    
    // C++ wchar_t
    wchar_t Test = L'ם';  // storing Hebrew character;
    
    cout << Test << endl;
    
    // C++ bool
    bool cond = false;
    
    cout << cond << endl;
    
    // C++ Type Modifiers
    long b = 4523232;
    long int c = 2345342;
    long double d = 233434.56343;
    // short e = 3434233; // Error! out of range
    // unsigned int a = -5;    // Error! can only store positive numbers or 0
    
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;

    return 0;
}