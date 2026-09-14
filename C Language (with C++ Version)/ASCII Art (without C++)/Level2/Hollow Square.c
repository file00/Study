// [Title] Hollow Square
#include <stdio.h>

// Program to print a hollow square using ASCII characters
int main() {
    
    int size = 5; // Size of the square side

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Print '*' for boundaries, otherwise print space
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}