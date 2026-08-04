// [Title] Exam Prep - Variable Tracking with Comments and Preprocessors
#include <stdio.h>

int main() {
    int number1 = 10;
    int number2 = 15;
    int sum = number1 + number2; // sum = 25

    // [Step 1] Execute single-line operation
    sum = sum + 5; // sum becomes 30

    /* 
       [Trap 1] Multi-line comment disables these operations completely
       sum = sum * 2; 
       sum = sum + 10;
    */

#if 0
    // [Trap 2] Preprocessor directive removes this block entirely
    sum = sum * 3;
    /* Nested comment inside disabled code */
    sum = sum + 100;
#endif

    // [Step 2] Inline calculation hidden after a preprocessor block
    sum = sum - 2; // sum becomes 28

    printf("Result: %d", sum);

    return 0;
}
