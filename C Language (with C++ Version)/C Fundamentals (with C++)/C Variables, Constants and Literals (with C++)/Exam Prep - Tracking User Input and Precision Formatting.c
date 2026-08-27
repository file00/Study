// [Title] Exam Prep - Tracking User Input and Precision Formatting
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    
    double input_val;
    char code = 'B'; // ASCII value of 'B' is 66
    double result;

    // [Step 1] Read a double precision floating-point number from user
    // (Assume the user inputs: 3.14159)
    scanf("%lf", &input_val); 

    /* 
     * [Trap 1] Multi-line comment bypassing a misleading adjustment
     * input_val = input_val + 10.0;
     */

    // [Step 2] Mixed arithmetic with double and char (ASCII arithmetic)
    // 3.14159 + 66 = 69.14159
    result = input_val + code; 

    // [Step 3] Output with specific precision constraints
    // Resulting value 69.14159 will be rounded to 3 decimal places
    printf("Code: %c\n", code);
    printf("Result: %.3f", result);

    return 0;
}
