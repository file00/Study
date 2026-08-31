// [Title] Exam Prep - Integer Literals in Multiple Radixes and Arithmetic
#include <stdio.h>

int main() {
    
    int decimal_val = 22;
    int octal_val = 021;       // [Trap 1] Starts with '0' -> Octal literal (21 in octal = 17 in decimal)
    int hex_val = 0x2A;        // [Trap 2] Starts with '0x' -> Hexadecimal literal (2A in hex = 42 in decimal)
    
    int result = 0;

    /* 
     * [Trap 3] Multi-line comment disabling an intermediate reset
     * decimal_val = 0;
     * octal_val = 0;
     */

    // [Step 1] Perform mixed-radix arithmetic
    // result = 22 + 17 + 42 = 81
    result = decimal_val + octal_val + hex_val;

    // [Step 2] Output the values using standard decimal formatting
    printf("Octal as Dec: %d\n", octal_val);
    printf("Result: %d", result);

    return 0;
}
