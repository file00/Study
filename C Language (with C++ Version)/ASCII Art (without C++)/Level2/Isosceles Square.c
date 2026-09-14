// [Title] Isosceles Square
#include <stdio.h>

// Program to print an isosceles triangle using ASCII characters
int main() {
    int height = 5; // Height of the triangle

    for (int i = 0; i < height; i++) {
        // Print leading spaces for alignment
        for (int j = 0; j < height - i - 1; j++) {
            printf(" ");
        }
        // Print stars for the triangle body
        for (int k = 0; k < (2 * i + 1); k++) {
            printf("*");
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}