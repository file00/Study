/*  if...else statement */
// Check whether an integer is odd or even

#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    // true if number is less than 0
    if (number % 2 == 0) {
        cout << number << " is an even integer." << endl;
    }
    else {
    cout << number << " is an odd integer." << endl;
    }
    
    return 0;
}