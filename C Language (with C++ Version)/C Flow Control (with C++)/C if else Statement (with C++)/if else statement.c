// if...else statement 
// Check whether an integer is odd or even
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    
    int number;
    
    printf("Enter an integer: ");
    scanf("%d", &number);

    // True if the remainder is 0
    if  (number%2 == 0) {
        printf("%d is an even integer.",number);
    }
    else {
        printf("%d is an odd integer.",number);
    }

    return 0;
}
