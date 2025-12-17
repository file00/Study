// Simple Example of goto Statement in C
#include <stdio.h>

int main() {
    
    int i = 0;

start:   // label
    printf("i = %d\n", i);
    i++;

    // If condition is met, jump back to 'start'
    if(i < 5) {
        goto start;  
    }

    // Program continues here after the loop ends
    printf("End of program.\n");

    return 0;
}
