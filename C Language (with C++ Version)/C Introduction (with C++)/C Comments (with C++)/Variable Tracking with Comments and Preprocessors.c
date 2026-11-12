// [Title] Variable Tracking with Comments and Preprocessor Directives
#include <stdio.h>

int main() {
    int number1 = 10;
    int number2 = 15;
    int sum = number1 + number2; // sum = 25

    // [Step 1] Execute single-line operation
    sum = sum + 5; // sum turns into 30 (25 + 5)

    /* 
     * [Trap 1] Multi-line block comment; compiler completely ignores these lines.
     * sum = sum * 2; 
     * sum = sum + 10;
     */

#if 0
    // [Trap 2] Conditional compilation directive; stripped out by the preprocessor before compilation.
    sum = sum * 3;
    /* Nested block comment safely disabled inside an #if 0 block */
    sum = sum + 100;
#endif

    // [Step 2] Active statement resuming after the preprocessor block
    sum = sum - 2; // sum turns into 28 (30 - 2)

    printf("Result: %d", sum);

    return 0;
}
