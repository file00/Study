// Literals Integers

#include <stdio.h>

int main() {
    
    // 1. Output Decimal values
    int d1 = 0, d2 = -9, d3 = 22;
    
    printf("Decimal: %d, %d, %d\n", d1, d2, d3);

    // 2. Output Octal values
    // The '#' flag adds the '0' prefix for octal representation
    int o1 = 021, o2 = 077, o3 = 033;
    
    printf("Octal: %#o, %#o, %#o\n", o1, o2, o3);

    // 3. Output Hexadecimal values
    // The '#' flag adds the '0x' prefix for hexadecimal representation
    int h1 = 0x7f, h2 = 0x2a, h3 = 0x521;
    
    printf("Hexadecimal: %#x, %#x, %#x\n", h1, h2, h3);

    return 0;
}