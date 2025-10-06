// Christmas Tree (ASCII Art)
// Difficulty Level 3: Includes symmetry, multiple sections, and proportional adjustments

#include <stdio.h>

int main() {
    int height = 6; // Height of the tree

    // Tree part
    for (int i = 1; i <= height; i++) {
        // Print spaces before the stars
        for (int j = i; j < height; j++) {
            printf(" ");
        }
        // Print stars for each level
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    // Tree trunk
    for (int i = 0; i < 2; i++) {
        for (int j = 1; j < height; j++) {
            printf(" ");
        }
        printf("|\n");
    }

    return 0;
}