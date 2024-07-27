/* I/O Multiple Values */
#include <iostream>
using namespace std;

int main() {
    int a;
    float b;

    cout << "Enter integer and then a float: ";
  
    // Taking multiple inputs
    cin >> a >> b;

    cout << fixed;
    cout.precision(6);
    cout << "You entered " << a << " and "<< b << endl;
    return 0;
}