// if statement 
// Program to display a number if it is negative
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // true if number is less than 0
    if (number < 0) {
        printf("You entered %d.\n", number);
    }

    printf("The if statement is easy.");

    return 0;
}
