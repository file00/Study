// Logical Operators (Input & Output Version)
// Working of logical operators

#include <stdio.h>

int main() {
    
    int a, b, c, result;

    // Input three integer values from the user
    printf("Enter three integers (a, b, and c): ");
    scanf("%d %d %d", &a, &b, &c);

    // AND (&&) operator: returns 1 if both conditions are true
    result = (a == b) && (c > b);
    printf("(a == b) && (c > b) is %d \n", result);

    result = (a == b) && (c < b);
    printf("(a == b) && (c < b) is %d \n", result);

    // OR (||) operator: returns 1 if at least one condition is true
    result = (a == b) || (c < b);
    printf("(a == b) || (c < b) is %d \n", result);

    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) is %d \n", result);

    // NOT (!) operator: reverses the logical state (true becomes false, and vice versa)
    result = !(a != b);
    printf("!(a != b) is %d \n", result);

    result = !(a == b);
    printf("!(a == b) is %d \n", result);

    return 0;
}