/* if statement */
// Program to display a number if it is negative

#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    // true if number is less than 0
    if (number < 0) {
        cout << "You entered " << number << "." << endl;
    }

    cout << "The if statement is easy." << endl;

    return 0;
}