// String Literals (Input & Output Version)

#include <stdio.h>

int main() {
    
    // Define a character array (buffer) to store the input string
    // [100] means it can hold up to 99 characters plus a null terminator
    char str[100];

    // Prompt the user for input
    printf("Enter a string: ");

    // Read a string from the user
    // %s reads characters until it encounters a space or newline
    scanf("%s", str);

    // Print the entered string
    printf("\nYou entered: \"%s\"\n", str);

    return 0;
}