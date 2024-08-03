/* Nested if...else */
#include <iostream>
using namespace std;

int main() {
    int number1, number2;
    cout << "Enter two integers: ";
    cin >> number1 >> number2;

    if (number1 >= number2) {
      if (number1 == number2) {
        cout << "Result: " << number1 << " = " << number2 << endl;
      }
      else {
        cout << "Result: " << number1 << " > " << number2 << endl;
      }
    }
    else {
        cout << "Result: " << number1 << " < " << number2 << endl;
    }

    return 0;
}