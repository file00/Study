/* Logical Operators */
// Working of logical operators

#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 5, c = 10, result;
    
    //cout << fixed;
    //cout.precision(6);
    result = (a == b) && (c > b);
    cout << "(a == b) && (c > b) is " << result << endl;
    result = (a == b) && (c < b);
    cout << "(a == b) && (c < b) is " << result << endl;
    result = (a == b) || (c < b);
    cout << "(a == b) || (c < b) is " << result << endl;
    result = (a != b) || (c < b);
    cout << "(a != b) || (c < b) is " << result << endl;
    result = !(a != b);
    cout << "!(a != b) is " << result << endl;
    result = !(a == b);
    cout << "!(a == b) is " << result << endl;
    
    

    return 0;
}