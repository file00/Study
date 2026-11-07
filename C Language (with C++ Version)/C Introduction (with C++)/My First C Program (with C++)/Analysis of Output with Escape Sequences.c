// [Title] Analysis of Output with Escape Sequences
#include <stdio.h>

int main() {
    // [Step 1] Print first string without a newline sequence
    printf("I love C Language!!"); 
    
    // [Step 2] Print second string with a newline and a horizontal tab sequence
    printf("Hello,\tWorld!\n");   

    // [Step 3] Print third string on the new line
    printf("Welcome to Exam");

    return 0;
}

/*
 =========================================================================
 [Learning Notes & Rules]
 =========================================================================
 1. Buffer & Line Continuity:
    - printf() does NOT automatically insert a newline.
    - If '\n' is omitted, the next printf() starts EXACTLY where the last 
      one ended, forcing text onto the same line.

 2. Expected Output Screen:
    I love C Language!!Hello,       World!
    Welcome to Exam

 3. Exam Trap Alert (Information Processing Engineer Exam):
    - Examiners love to split text into multiple printf() statements 
      WITHOUT '\n' to trick students into choosing a multi-line answer.
    - Output layout depends entirely on escape sequences, NOT code lines.
 =========================================================================
*/
