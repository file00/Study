// Float and Double Input/Output 
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    float num1;
    double num2;

    cout << "Enter a number: ";
    cin >> num1;
    
    cout << "Enter another number: ";
    cin >> num2;

    cout << fixed << setprecision(6);

    cout << "num1 = " << num1 << "\n";
    cout << "num2 = " << num2;

    return 0;
}
