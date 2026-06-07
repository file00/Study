// [Title] Preventing Code Execution Using Comments and Preprocessors 1

#include <stdio.h>

int main() {
    
    int number1 = 10;
    int number2 = 15;
    int sum = number1 + number2;

    // SECTION 1: Single-line comment example (This code will execute)
    printf("The sum is: %d\n", sum);

    /* 
       SECTION 2: Multi-line comment example
       The code below is commented out and will not be executed.
       If you uncomment the printf line below, it will cause a compiler error
       because 'product' is not defined in this scope.
    */
    // int product = number1 * number2;
    // printf("The product is: %d\n", product); 

    /*
       SECTION 3: Advanced code disabling using Preprocessor Directives
       Using '#if 0' and '#endif' is a safer way to disable large blocks of code,
       especially when the code already contains multi-line comments inside it.
    */
    
#if 0
    int difference = number2 - number1;
    printf("The difference is: %d\n", difference);
    
    /* 
       Nested multi-line comments like this can cause syntax errors 
       if you try to disable them using standard block comments (/* ... */).
       That is why '#if 0' is preferred for debugging.
    */
#endif
    
    return 0;
}
