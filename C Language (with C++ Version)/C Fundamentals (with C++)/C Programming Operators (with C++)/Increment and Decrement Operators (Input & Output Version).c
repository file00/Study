// Increment and Decrement Operators (Input & Output Version)
// Working of increment and decrement operators

#include <stdio.h>

int main() {
    
    int a, b;
    float c, d;

    // Input integer values from the user
    printf("Enter two integers (a and b): ");
    scanf("%d %d", &a, &b);

    // Input float values from the user
    printf("Enter two floats (c and d): ");
    scanf("%f %f", &c, &d);

    // Prefix increment and decrement operations and output results
    // ++a increments then returns the value
    printf("++a = %d \n", ++a);
    // --b decrements then returns the value
    printf("--b = %d \n", --b);
    // ++c works for float variables as well
    printf("++c = %f \n", ++c);
    // --d works for float variables as well
    printf("--d = %f \n", --d);

    return 0;
}