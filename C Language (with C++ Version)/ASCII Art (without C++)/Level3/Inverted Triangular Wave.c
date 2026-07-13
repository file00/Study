// [Title] Inverted Triangular Wave

#include <stdio.h>
#include <unistd.h> // For usleep function (Use <windows.h> and Sleep() on Windows)

int main() {
    
    int spaces = 30;    // Starting position (Starts at MAX instead of MIN)
    int direction = -1; // -1 for moving left first (decreasing), 1 for moving right

    const int MIN_SPACES = 10; // Left-most boundary
    const int MAX_SPACES = 30; // Right-most boundary

    while(1) {
        // Output spaces and the marker
        for (int i = 0; i < spaces; i++) {
            printf(" ");
        }
        printf("*\n");

        // Move to the next position linearly
        spaces += direction;

        // Reverse direction when boundaries are reached
        if (spaces >= MAX_SPACES) {
            spaces = MAX_SPACES;
            direction = -1; // Change direction to left
        } else if (spaces <= MIN_SPACES) {
            spaces = MIN_SPACES;
            direction = 1;  // Change direction to right
        }

        usleep(50000); // Delay for 0.05 seconds (50,000 microseconds)
    }

    return 0;
}