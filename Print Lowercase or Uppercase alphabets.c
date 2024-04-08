/* Print Lowercase/Uppercase alphabets */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char c;
    printf("Enter u to display uppercase alphabets.\n"); 
    printf("Enter l to display lowercase alphabets. \n");
    scanf("%c", &c);

    if (c == 'U' || c == 'u') { // U or u == Uppercase
        for (c = 'A'; c <= 'Z'; ++c)
            printf("%c ", c);
    } else if (c == 'L' || c == 'l') { // L or l == lowercase
        for (c = 'a'; c <= 'z'; ++c)
            printf("%c ", c);
    } else {
        printf("Error! You entered an invalid character.");
    }

    return 0;
}
