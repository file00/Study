// ASCII Value
// This program demonstrates how characters are stored as ASCII values
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    char chr;

    // Ask the user for a character input
    printf("Enter a character: ");

    // Read one character from input
    // The space before %c prevents reading leftover newline characters
    scanf(" %c", &chr);

    // When %c is used, the character itself is displayed
    printf("You entered %c.\n", chr);

    // When %d is used, the ASCII (integer) value of the character is displayed
    printf("ASCII value is %d.", chr);

    return 0;
}

