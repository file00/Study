/* Armstrong Numbers Between Two Integers */
// Armstrong Number : The sum of the numbers multiplied by the number of digits equals the number of your own
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int low, high, number, originalNumber, rem, count = 0;
  double result = 0.0;
  cout << "Enter two numbers(intervals): ";
  cin >> low >> high;
  cout << "Armstrong numbers between "<< low << " and " << high << " are:";

  if (high < low) {
    high += low;
    low = high - low;
    high -= low;
  }
   
  for (number = low + 1; number < high; ++number) {
    originalNumber = number;

    while (originalNumber != 0) {
      originalNumber /= 10;
      ++count;
    }

    originalNumber = number;

    while (originalNumber != 0) {
      rem = originalNumber % 10;
      result += pow(rem, count);
      originalNumber /= 10;
    }

    if ((int)result == number) {
      cout << " " <<number;
    }

    count = 0;
    result = 0;
  }
  return 0;
}

  


