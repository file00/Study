/* Pass Arrays to Functions */

// Program to calculate the sum of array elements by passing to a function 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
float calculateSum(float num[]);

int main() {
  float result, num[] = {23.4, 55, 22.6, 3, 40.5, 18};

  // num array is passed to calculateSum()
  result = calculateSum(num); 
  printf("Result = %.2f", result);
  return 0;
}

float calculateSum(float num[]) {
  float sum = 0.0;

  for (int i = 0; i < 6; ++i) {
    sum += num[i];
  }
  return sum;
}

/* Pass Multidimensional Arrays to a Function */

// void displayNumbers(int num[2][2]);

// int main() {
//   int num[2][2];
//   printf("Enter 4 numbers:\n");
//   for (int i = 0; i < 2; ++i) {
//     for (int j = 0; j < 2; ++j) {
//       scanf("%d", &num[i][j]);
//     }
//   }
//   // pass multi-dimensional array to a function
//   displayNumbers(num);
//   return 0;
// }

// void displayNumbers(int num[2][2]) {
//   printf("Displaying:\n");
//   for (int i = 0; i < 2; ++i) {
//     for (int j = 0; j < 2; ++j) {
//       printf("%d\n", num[i][j]);
//     }
//   }
// }
