// [Title] My First C Program (with Escape Sequence)

#include <stdio.h>

int main() {
    
    // 1. Without \n: The next text will stick right next to this sentence.
    printf("I love C Language!!"); 
    
    // 2. With \n: This moves the cursor to the next line after printing.
    printf("Hello, World!\n");   

    /*
     * [Understanding \n (New Line Escape Sequence)]
     * - C does not automatically wrap text to a new line between printf statements.
     * - \n acts exactly like pressing the 'Enter' key on your keyboard.
     * 
     * Note for Beginners:
     * - Depending on your keyboard or font, '\' may look like the Korean Won sign (₩). 
     *   They function exactly the same in C code (₩n is the same as \n).
     */

    return 0;
}
