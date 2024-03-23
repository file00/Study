/* Relational Operators */
// True == 1 and False == 0
#include <iostream>
using namespace std;

int main() {
    int a = 3, b = 5;
    bool result;

    result = (a == b);   
    cout << "3 == 5 is " << result << endl;

    result = (a != b);  
    cout << "3 != 5 is " << result << endl;

    result = a > b;   
    cout << "3 > 5 is " << result << endl;

    result = a < b;  
    cout << "3 < 5 is " << result << endl;

    result = a >= b;  
    cout << "3 >= 5 is " << result << endl;

    result = a <= b;  
    cout << "3 <= 5 is " << result << endl;

    return 0;
}
