// [Title] Exam Prep - Tracking Multiple Variables with Disabling Comments
#include <stdio.h>

int main() {
    
    int number1 = 10, number2 = 15;
    int result = 0;

    /* 
     * [Trap 1] Deprecated logic - Entirely blocked by multi-line comment
     * number1 = 20;
     * result = number1 * number2; 
     */

    // [Trap 2] Inline block comment messing up sequential line reading
    number2 = 5; /* number2 = 30; */ 

    // [Step 1] Actual calculation performed by the CPU
    result = number1 * number2; // 10 * 5

    // [Trap 3] Single-line comment disabling an overwrite operation
    // result = result + 100;

    printf("Result: %d", result); 
    
    return 0;
}
