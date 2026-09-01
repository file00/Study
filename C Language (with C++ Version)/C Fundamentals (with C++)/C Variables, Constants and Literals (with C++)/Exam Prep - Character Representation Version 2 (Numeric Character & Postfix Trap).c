// [Title] Exam Prep - Character Representation Version 2 (Numeric Character & Postfix Trap)
#include <stdio.h>

int main() {
    char target = '2'; // ASCII value: 50
    int result = 10;

    // [Step 1] Arithmetic with a numeric character constant
    // 10 + 50 = 60
    result = result + target;

    // [Trap 1] Postfix increment inside arithmetic operation
    // '2' (50) is used for subtraction first, then target becomes '3' (51)
    result = result - target++; 

    /* 
     * [Trap 2] Multi-line comment bypassing a misleading adjustment
     * result = result + 5;
     */

    // [Step 2] Output final values
    printf("%c\n", target); // Prints the incremented character '3'
    printf("%d", result);   // Prints 60 - 50 = 10

    return 0;
}