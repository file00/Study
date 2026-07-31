// [Title] String Input and Output Using fgets
#include <stdio.h>

int main() {
    
    // Create a character array. It can hold up to 49 characters + 1 null character ('\0').
    char greeting[50];

    // Simple prompt for input (often omitted or simplified in exams).
    printf("Input: ");

    /*
     * [Important Exam Points for fgets]
     * 1. greeting         -> Target buffer array to store the string.
     * 2. sizeof(greeting) -> Prevents buffer overflow by limiting input size.
     * 3. stdin            -> Standard input stream (keyboard).
     * 
     * *Crucial Note: Unlike scanf, fgets includes the newline character (\n) 
     *                 in the string if there is enough space.
     */
    fgets(greeting, sizeof(greeting), stdin);
    
    // %s matches with the starting address of the character array to print the string.
    printf("Result: %s", greeting);

    return 0;
}
