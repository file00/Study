// [Title] String Input and Output Using fgets
#include <stdio.h>

int main() {    
    
    // Allocate a character array. Holds up to 49 characters plus the null terminator ('\0').
    char greeting[50];

    // Simple prompt for input (frequently omitted or simplified in exam contexts).
    printf("Input: ");

    /*
     * [Key Exam Points for fgets]
     * 1. greeting         -> Destination buffer array where the string is stored.
     * 2. sizeof(greeting) -> Maximum number of characters to read (including '\0'), 
     *                        preventing buffer overflow.
     * 3. stdin            -> Standard input stream (keyboard).
     * 
     * *Crucial Note (Common Exam Trap): 
     * - Unlike scanf, fgets retains the newline character ('\n') in the buffer 
     *   if there is sufficient space, immediately followed by the null terminator ('\0').
     * - Consequently, printing this string will automatically append a line break.
     */
    fgets(greeting, sizeof(greeting), stdin);
    
    // %s expects the starting address of the character array to print the string.
    printf("Result: %s", greeting);

    return 0;
}
