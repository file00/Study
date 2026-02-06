// do...while loop 
// Program to add numbers until the user enters zero
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
  
  double number, sum = 0;

  // the body of the loop is executed at least once
  do {
    printf("Enter a number: ");
    scanf("%lf", &number);
    sum += number;
  }
    
  while(number != 0.0);

  printf("Sum = %.2lf",sum);

  return 0;
}
