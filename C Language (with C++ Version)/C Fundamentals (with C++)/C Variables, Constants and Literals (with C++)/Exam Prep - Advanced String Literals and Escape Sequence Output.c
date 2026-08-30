// [Title] Exam Prep - Advanced String Literals and Escape Sequence Output
#include <stdio.h>

int main() {
    
    // [Step 1] String literal containing escaped double quotes and characters
    // Length checking trap with inner quotes
    printf("\"good\"\n");

    // [Step 2] String literal using dual character escape for backslash
    printf("Earth is round\\n\n");

    // [Step 3] Pointer referencing a specific index of a string literal
    // "ABCDEF" -> ptr points to 'A'
    char *ptr = "ABCDEF"; 
    
    // ptr + 3 moves the pointer to 'D'
    printf("%s", ptr + 3); 

    return 0;
}
