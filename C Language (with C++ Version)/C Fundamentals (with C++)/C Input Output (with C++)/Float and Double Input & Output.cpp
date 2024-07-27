/* Float and Double Input/Output */
#include <iostream>
using namespace std;
int main() {
    float num1;
    double num2;
    
    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter another number: ";
    cin >> num2;

    cout << fixed;
    cout.precision(6);
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    return 0;
}
