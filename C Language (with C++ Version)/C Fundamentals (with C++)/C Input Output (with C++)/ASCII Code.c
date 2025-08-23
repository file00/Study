// ASCII Code (Version.C) 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char chr;
    printf("Enter a character: ");
    scanf("%c", &chr);

    printf("You entered %c.\n", chr);
    printf("ASCII value is %d.", chr);
    return 0;
}
