/* continue statement */
// Program to calculate the sum of numbers (10 numbers max)
// If the user enters a negative number, it's not added to the result

#include <iostream>
using namespace std;

int main() {
    int i;
    double number, sum = 0.0;
   
    for (i = 1; i <= 10; ++i) {
      cout << "Enter a n" << i << ": ";
      cin >> number;

      // if the user enters a negative number, break the loop
      if (number < 0.0) {
         continue;
      }

      sum += number; // sum = sum + number;
   }
   cout << fixed;
   cout.precision(2);
   cout << "Sum = " << sum << endl;

    return 0;
}