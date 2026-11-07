// [Title] Basic Structure and Output in C
#include <stdio.h>

int main() {
    // Print a message and move the cursor to the next line (\n).
    printf("Hello, World!\n");   

    return 0;
}

/*
 =========================================================================
 [Learning Notes & Rules]
 =========================================================================
 1. Syntax: Output strings must be enclosed in double quotes inside printf().
 2. Termination: Every statement must end with a semicolon (;).
 3. Escape Sequence: '\n' creates a newline. Crucial for exam evaluation.
 =========================================================================
 [Comparison & Analysis: Alternative but Incorrect Code]
 =========================================================================
 #include <stdio.h>
 void main() { 
   printf("Hello, World!"\n);
 }
 
 * Critical Flaws:
 1. Syntax Error: '\n' must be INSIDE the double quotes -> printf("Hello, World!\n");
 2. Non-standard Main: 'void main()' violates C99/C11 standards. 
    Always use 'int main()' with 'return 0;' for modern compilers and exams.
 =========================================================================
*/
