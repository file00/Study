/* Program to Print an Integer */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {   
    int number;
   
    printf("Enter an integer: ");  
    
    // reads and stores input
    scanf("%d", &number);

    // displays output
    printf("You entered: %d", number);
    
    return 0;
}
