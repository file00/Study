// Pyramid Pattern (ASCII Art)
// Difficulty Level 2: Focused on simple repetition and alignment

#include <stdio.h>

int main() {
    int rows = 10;

    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = i; j < rows; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}