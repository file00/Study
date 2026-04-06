// Prevent Executing Code Using Comments 2

#include <stdio.h>

int main() {
    
    int number1 = 10, number2 = 15;

    /* 
       The following 'sum' block is commented out 
       to prevent its execution as per the file title.
    */
    // int sum = number1 + number2;
    // printf("The sum is: %d\n", sum);

    // This section is active and will execute.
    int product = number1 * number2;
    printf("The product is: %d\n", product); 
    
    return 0;
}
