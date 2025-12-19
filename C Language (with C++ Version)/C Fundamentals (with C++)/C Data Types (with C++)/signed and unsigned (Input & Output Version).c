// signed and unsigned (Input & Output Version)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    unsigned int x;
    int y;
    int z;

    // Input values
    scanf("%u", &x);   // unsigned int input
    scanf("%d", &y);   // signed int input
    scanf("%d", &z);   // signed int input

    // Output values
    printf("x (unsigned int) = %u\n", x);
    printf("y (signed int) = %d\n", y);
    printf("z (signed int) = %d\n", z);

    // Invalid case example:
    // An unsigned int cannot store negative values
    // Example (do not use):
    // unsigned int num = -1;

    return 0;
}