// Inverted Pyramid Pattern (ASCII Art)
// Difficulty Level 3: Reverse alignment and repetition

#include <stdio.h>

int main() {
    int rows = 10;

    for (int i = rows; i >= 1; i--) {
        // Print leading spaces
        for (int j = rows; j > i; j--) {
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
