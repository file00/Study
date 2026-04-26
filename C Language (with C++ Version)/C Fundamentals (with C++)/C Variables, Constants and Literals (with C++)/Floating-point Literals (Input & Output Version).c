// Floating-point Literals (Input & Output Version)

#include <stdio.h>

int main() {
    double f1, f2, f3;

    // 1. Get user input for three double precision floating-point numbers
    printf("Enter three floating-point numbers: ");
    scanf("%lf %lf %lf", &f1, &f2, &f3);

    // 2. Output using standard floating-point format (Limited to 2 decimal places)
    printf("\nStandard Format (%%.2f):\n");
    printf("f1: %.2f\n", f1);
    printf("f2: %.2f\n", f2);
    printf("f3: %.2f\n\n", f3);

    // 3. Output using scientific notation (Limited to 2 decimal places)
    printf("Scientific Notation (%%.2e):\n");
    printf("f1: %.2e\n", f1);
    printf("f2: %.2e\n", f2);
    printf("f3: %.2e\n", f3);

    return 0;
}