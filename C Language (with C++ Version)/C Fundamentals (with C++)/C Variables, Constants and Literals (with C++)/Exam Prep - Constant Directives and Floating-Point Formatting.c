// [Title] Exam Prep - Constant Directives and Floating-Point Formatting
#include <stdio.h>

int main() {
    
    const double PI = 3.14159;
    double result = 10.0;

    /* 
     * [Trap 1] Attempting to modify a constant will cause a compile error.
     * PI = 3.14; 
     */

    // [Step 1] Perform arithmetic using the constant
    result = result * PI; // 10.0 * 3.14159 = 31.4159

    // [Step 2] Formatting outputs with precision specifiers
    printf("%.1f\n", result); // Prints with 1 decimal place (Rounded)
    printf("%.3f", result);   // Prints with 3 decimal places (Rounded)

    return 0;
}
