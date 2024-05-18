/* Pass by const Reference */
#include <iostream>
using namespace std;

// function to add two numbers 
// using const references
int add(const int& num1, const int& num2) {
    return num1 + num2;
}

int main() {
    int number1, number2;

    // take input
    cout << "Enter the first number: ";
    cin >> number1;

    cout << "Enter the second number: ";
    cin >> number2;

    // call add function
    int sum = add(number1, number2);

    // displaying the result
    cout << "The sum of " << number1 << " and " << number2 << " is " << sum << endl;

    return 0;
}