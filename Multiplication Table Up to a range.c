/* Multiplication Table Up to a range */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n, i, range;
    printf("Enter an integer: ");
    scanf("%d", &n);

    // prompt user for positive range
    do {
        printf("Enter the range (positive integer): ");
        scanf("%d", &range);
    } while (range <- 0);
    
    for (i = 1; i < 11; ++i) {
        printf("%d * %d = %d\n", n, i, n*i);
    }
    return 0;
}

// Here, we have used a do...while loop to prompt the user for a positive range.
// If the value of range is negative, the loop iterates again to ask the user to enter a positive number. 
// Once a positive range has been entered, we print the multiplication table.
