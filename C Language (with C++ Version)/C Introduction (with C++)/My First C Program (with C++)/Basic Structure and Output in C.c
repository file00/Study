// [Title] Basic Structure and Output in C
#include <stdio.h>

int main()
{
    // Prints "Hello, World!" and moves the cursor to the next line.
    printf("Hello, World!\n");   

     /*
     * [Important Rules for printf & Output]
     * 1. The content to print must be enclosed in parentheses () and double quotes "".
     * 2. Every statement must end with a semicolon (;) to prevent syntax errors.
     * 3. '\n' is an escape sequence used to insert a newline character.
     * *Note: The Information Processing Engineer exam strictly checks for newlines 
     *        when evaluating the exact execution output.
     */

    return 0;
}

/*
 =========================================================================
 [Comparison & Analysis: Alternative but Incorrect Code]
 =========================================================================
 #include<stdio.h>
 void main() 
 { 
   printf("Hello, World!"\n);
 }
 
 * Why this code has problems (Critical for Exams & Standards):
 
 1. Syntax Error (Compile Failure)
    - Incorrect: printf("Hello, World!"\n);
    - Correct  : printf("Hello, World!\n");
    - Reason   : The escape sequence '\n' MUST be placed INSIDE the double quotes.
                 Placing it outside causes a compiler syntax error.

 2. Non-standard Main Function (void main)
    - According to C standard mandates (C99/C11/C23), the main function 
      should return an integer ('int main') and end with 'return 0;'.
    - 'void main()' is a non-standard extension. While some older compilers 
      or specific IDEs accept it, it can cause undefined behavior or compilation 
      failures on modern, strict compilers (like GCC or Clang).
    - *Exam Tip: The Information Processing Engineer exam strictly uses 'int main'.
 =========================================================================
*/
