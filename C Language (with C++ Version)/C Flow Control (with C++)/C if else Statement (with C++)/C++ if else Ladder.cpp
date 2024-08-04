/* C if...else Ladder */
// Program to relate two integers using =, > or < symbol

#include <iostream>
using namespace std;

int main() {
    int number1, number2;
    cout << "Enter two integers: ";
    cin >> number1 >> number2;

    //checks if the two integers are equal.
    if(number1 == number2) {
        cout << "Result: " << number1 << " = " << number2 << endl; 
    }

    //checks if number1 is greater than number2.
    else if (number1 > number2) {
        cout << "Result: " << number1 << " > " << number2 << endl; 
    }

    //checks if both test expressions are false
    else {
        cout << "Result: " << number1 << " < " << number2 << endl; 
    }

    return 0;
}