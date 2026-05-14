// Relational Operators (Input & Output Version)
// Working of relational operators

#include <stdio.h>

int main() {
    
    int a, b, c;

    // Input three integer values from the user
    printf("Enter three integers (a, b, and c): ");
    scanf("%d %d %d", &a, &b, &c);

    // Equal to (==) operator
    printf("%d == %d is %d \n", a, b, a == b);
    printf("%d == %d is %d \n", a, c, a == c);

    // Greater than (>) operator
    printf("%d > %d is %d \n", a, b, a > b);
    printf("%d > %d is %d \n", a, c, a > c);

    // Less than (<) operator
    printf("%d < %d is %d \n", a, b, a < b);
    printf("%d < %d is %d \n", a, c, a < c);

    // Not equal to (!=) operator
    printf("%d != %d is %d \n", a, b, a != b);
    printf("%d != %d is %d \n", a, c, a != c);

    // Greater than or equal to (>=) operator
    printf("%d >= %d is %d \n", a, b, a >= b);
    printf("%d >= %d is %d \n", a, c, a >= c);

    // Less than or equal to (<=) operator
    printf("%d <= %d is %d \n", a, b, a <= b);
    printf("%d <= %d is %d \n", a, c, a <= c);

    return 0;
}