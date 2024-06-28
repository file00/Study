/* C++ if else Statement */
// Program to check whether an integer is positive or negative
// This program considers 0 as a positive number
#include <iostream>
using namespace std;

int main() {
  int number;

  cout << "Enter an integer: ";
  cin >> number;

  if (number >= 0) {
    cout << "You entered a positive integer: " << number << endl;
  }
  else {
    cout << "You entered a negative integer: " << number << endl;
  }

  cout << "This line is always printed.";

  return 0;
}