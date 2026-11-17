// [Title] Tracking Multiple Variables with Disabling Comments
#include <stdio.h>

int main() {
    
    int number1 = 10, number2 = 15;
    int result = 0;

    /* 
     * [Trap 1] Deprecated logic - Entirely blocked by multi-line comment
     * number1 = 20;
     * result = number1 * number2; 
     */

    // [Trap 2] Inline block comment placed inside an expression to obscure the actual value
    number2 = 5 /* + 30 */; 

    // [Step 1] Actual calculation performed by the CPU
    result = number1 * number2;

    // [Trap 3] Single-line comment disabling an overwrite operation
    // result = result + 100;

    printf("Result: %d\n", result); 
    
    return 0;
}
