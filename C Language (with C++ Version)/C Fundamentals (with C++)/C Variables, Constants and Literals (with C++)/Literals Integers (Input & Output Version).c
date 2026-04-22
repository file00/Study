// Literals Integers (Input & Output Version)

#include <stdio.h>

int main() {
    
    int v1, v2, v3;

    // Receive three integer inputs from the user
    printf("Enter three integers: ");
    scanf("%d %d %d", &v1, &v2, &v3);

    // 1. Output Decimal values
    // Using %d to display standard base-10 integers
    printf("Decimal: %d, %d, %d\n", v1, v2, v3);

    // 2. Output Octal values
    // The '#' flag adds the '0' prefix for octal representation
    printf("Octal: %#o, %#o, %#o\n", v1, v2, v3);

    // 3. Output Hexadecimal values
    // The '#' flag adds the '0x' prefix for hexadecimal representation
    printf("Hexadecimal: %#x, %#x, %#x\n", v1, v2, v3);

    return 0;
}