/* Pass Arrays to Functions */

// Program to calculate the sum of array elements by passing to a function 
#include <iostream>
using namespace std;

float calculateSum(float num[]);

int main() {
  float result, num[] = {23.4, 55, 22.6, 3, 40.5, 18};

  // num array is passed to calculateSum()
  result = calculateSum(num); 
  cout << fixed;
  cout.precision(2);
  cout << "Result = " << result << endl;
  
  return 0;
}

float calculateSum(float num[]) {
  float sum = 0.0;

  for (int i = 0; i < 6; ++i) {
    sum += num[i];
  }

  return sum;
}