// if statement (Input & Output Version)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Skip printing the number if it is greater than or equal to 0
    if (number >= 0) {
        
        // Do nothing for non-negative numbers
    } else {
        printf("You entered %d.\n", number);
    }

    printf("The if statement is easy.");

    return 0;
}