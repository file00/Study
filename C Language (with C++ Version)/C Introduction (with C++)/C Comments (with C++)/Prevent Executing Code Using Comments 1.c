// Prevent Executing Code Using Comments 1

#include <stdio.h>

int main() {
    
    int number1 = 10;
    int number2 = 15;
    int sum = number1 + number2;

    // Print the sum (This code will execute)
    printf("The sum is: %d\n", sum);

    /* 
       The code below is commented out and will not be executed.
       Uncommenting it without defining 'product' would cause a compiler error.
    */
    // int product = number1 * number2;
    // printf("The product is: %d\n", product); 
    
    return 0;
}
