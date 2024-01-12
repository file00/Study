#include <stdio.h>
#include <math.h>

/* Let's solve the problems below again in C language */
/* 1. print(16 + ((-4 + 2) * 32) - 72 / 3)
   2. print(16 * ((-(1/8) + ((-1/2) ** 2) / (2/7)) + (1/4)))
   3. print(5-((((-4) ** 2) - (9 / (3/2))) - (-2)))
   4. print((-5) - (((-4 ** 2) - 9 / (3/2)) - (-2)))*/

int main() {
    // Problem 1
    double result1 = 16 + ((-4 + 2) * 32) - 72 / 3;
    printf("Result 1: %.2lf\n", result1);

    // Problem 2
    double result2 = 16 * ((-(1.0/8) + pow((-1.0/2), 2) / (2.0/7)) + (1.0/4));
    printf("Result 2: %.2lf\n", result2);

    // Problem 3
    double result3 = 5 - (((pow(-4, 2) - 9 / (3.0/2)) - (-2)));
    printf("Result 3: %.2lf\n", result3);

    // Problem 4
    double result4 = (-5) - (((pow(-4, 2) - 9 / (3.0/2)) - (-2)));
    printf("Result 4: %.2lf\n", result4);

    return 0;
}