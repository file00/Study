// Diamond Pattern Program (ASCII Art)

#include <stdio.h>

int main() {
    int i, j;
    int size = 5; // Mid-height of the diamond (you can change this value)

    // 1. Print the top half (Triangle)
    for (i = 1; i <= size; i++) {
        // Print leading spaces: spaces decrease as line number increases
        for (j = 1; j <= size - i; j++) {
            printf(" ");
        }
        // Print stars: odd numbers (1, 3, 5...)
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // 2. Print the bottom half (Inverted Triangle)
    for (i = size - 1; i >= 1; i--) {
        // Print leading spaces: spaces increase as i decreases
        for (j = 1; j <= size - i; j++) {
            printf(" ");
        }
        // Print stars: odd numbers decreasing
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}