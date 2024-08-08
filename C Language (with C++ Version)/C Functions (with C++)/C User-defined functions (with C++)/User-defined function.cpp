/* User-defined function */
#include <iostream>
using namespace std;

int addNumbers(int a, int b);         // function prototype

int main() {
    int n1,n2,sum;

    cout << "Enters two numbers: ";
    cin >> n1 >> n2;

    sum = addNumbers(n1, n2);        // function call
    cout << "sum = " << sum << endl;

    return 0;
}

int addNumbers(int a, int b)         // function definition   
{
    int result;
    result = a+b;
    return result;                  // return statement
}