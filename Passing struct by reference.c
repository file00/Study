/* Passing struct by reference */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct Complex {
   float real;
   float imag;
} complex;

void addNumbers(complex c1, complex c2, complex *result);

int main() {
  complex c1, c2, result;

  printf("For first number,\n");
  printf("Enter real part: ");
  scanf("%f", &c1.real);
  printf("Enter imaginary part: ");
  scanf("%f", &c1.imag);
  printf("\n============================\n");
  printf("For second number,\n");
  printf("Enter real part: ");
  scanf("%f", &c2.real);
  printf("Enter imaginary part: ");
  scanf("%f", &c2.imag);
  
  addNumbers(c1, c2, &result);
  printf("\nResult.real = %.1f\n", result.real);
  printf("Result.imag = %.1f", result.imag);

  return 0;
}

void addNumbers(complex c1, complex c2, complex *result) {
  result->real = c1.real + c2.real;
  result->imag = c1.imag + c2.imag;
}

