// My First C Program (with Escape Sequence)

#include <stdio.h>

int main() {
    
    // The '\n' moves the cursor to the next line after printing.
    printf("Hello, World!\n");   
    
    // This text will start on a brand new line.
    printf("I love C Language!!");

    /*
     * [Understanding \n (New Line Escape Sequence)]
     * - C does not automatically wrap text to a new line between printf statements.
     * - \n acts like pressing the 'Enter' key on your keyboard.
     * 
     * Comparison:
     * - With \n    -> Moves the cursor down. The next text goes to the next line.
     * - Without \n -> Keeps the cursor there. The next text sticks right next to it.
     */

    return 0;
}
