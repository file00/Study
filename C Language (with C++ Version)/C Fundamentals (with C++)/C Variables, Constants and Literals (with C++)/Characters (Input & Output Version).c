// Characters (Input & Output Version)

#include <stdio.h>

int main() {
    
    char input;

    // Prompt the user to enter a character
    printf("Please enter any Cha`racter: ");

    // Read a single character from the keyboard
    // Use %c to format the input as a character
    scanf("%c", &input);

    // Print the entered character back to the console
    printf("\nYou entered: '%c'\n", input);

    return 0;
}