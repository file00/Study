// ASCII Code (Version.C)
// This program reads a character and prints its ASCII value
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    char chr;

    // Prompt the user to enter a character
    printf("Enter a character: ");

    // Read a single character
    // Leading space ignores whitespace (e.g., newline)
    scanf(" %c", &chr);

    // Output the entered character
    printf("You entered %c.\n", chr);

    // Output the ASCII value of the character
    printf("ASCII value is %d.", chr);

    return 0;
}
