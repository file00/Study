/* Simple Calculator */
// Program to create a simple calculator
#include <iostream>
using namespace std;

int main() {
    char operation;
    double n1, n2;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter two operands: ";
    cin >> n1 >> n2;
    
    cout << fixed;
    cout.precision(1);
    
    switch(operation)
    {   
        case '+':
            //printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
            cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
            break;

        case '-':
            //printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
            cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
            break;

        case '*':
            //printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
            cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
            break;

        case '/':
            //printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
            cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
            break;

        // operator doesn't match any case constant +, -, *, /
        default:
            cout << "Error! operator is not correct" << endl;
    }

    return 0;
}