// Floating-point Literals

#include <stdio.h>

int main() {
    
    // 1. Double precision floating-point numbers
    double f1 = -2.0;
    double f2 = 0.0000234;
    double f3 = -0.22E-5; // Scientific notation: -0.22 * 10^-5

    // Use %f for standard decimal notation
    // Use %e or %E for scientific (exponential) notation
    // Use %g to automatically choose the shorter format between %f and %e

    // Output using standard floating-point format
    printf("Standard Format (%%f):\n");
    printf("f1: %f\n", f1);
    printf("f2: %f\n", f2);
    printf("f3: %f\n\n", f3);

    // Output using scientific notation
    printf("Scientific Notation (%%e):\n");
    printf("f1: %e\n", f1);
    printf("f2: %e\n", f2);
    printf("f3: %e\n", f3);

    return 0;
}