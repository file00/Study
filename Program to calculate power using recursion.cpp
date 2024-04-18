/* Program to calculate power using recursion */
#include <iostream>
using namespace std;

int power(int n1, int n2);

int main() {
    int base, a, result;
    cout << "Enter base number: ";
    cin >> base;
    cout << "Enter power number(positive integer): ";
    cin >> a;
    
    result = power(base, a);
    cout << base << " ^ " << a << " = " << result << endl;
    return 0;
}

int power(int base, int a) {
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}

