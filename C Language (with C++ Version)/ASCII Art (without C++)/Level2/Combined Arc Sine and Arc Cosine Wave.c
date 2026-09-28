// [Title] Combined Arc Sine and Arc Cosine Wave
#define _USE_MATH_DEFINES // Enables math constants like M_PI
#include <stdio.h>
#include <math.h>
#include <unistd.h> // For usleep function (Use <windows.h> and Sleep() on Windows)

int main() {
    
    double x = -1.0;
    double step = 0.05; // Amount of change per step
    int direction = 1;  // 1 for increasing, -1 for decreasing

    while(1) {
        // Calculate spaces for both waves
        int spaces_asin = (int)(20 + (20 * (asin(x) / (M_PI / 2))));
        int spaces_acos = (int)(40 * (acos(x) / M_PI));
        
        // Determine which star comes first (left to right)
        int first_spaces, second_spaces;
        char first_char, second_char;

        if (spaces_asin < spaces_acos) {
            first_spaces = spaces_asin;
            second_spaces = spaces_acos - spaces_asin - 1; // Subtract 1 for the first star
            first_char = 'S';  // 'S' for Sine
            second_char = 'C'; // 'C' for Cosine
        } else if (spaces_asin > spaces_acos) {
            first_spaces = spaces_acos;
            second_spaces = spaces_asin - spaces_acos - 1; // Subtract 1 for the first star
            first_char = 'C';  // 'C' for Cosine
            second_char = 'S'; // 'S' for Sine
        } else {
            // When both waves overlap at the same position
            first_spaces = spaces_asin;
            second_spaces = -1; // Flag to skip the second print
            first_char = 'X';   // 'X' for Overlap
        }

        // 1. Print spaces before the first star
        for (int i = 0; i < first_spaces; i++) {
            printf(" ");
        }
        // 2. Print the first star
        printf("%c", first_char);

        // 3. Print spaces and the second star if they do not overlap
        if (second_spaces >= 0) {
            for (int i = 0; i < second_spaces; i++) {
                printf(" ");
            }
            printf("%c", second_char);
        }
        
        // Move to the next line
        printf("\n");
        
        // Update x value based on current direction
        x += step * direction;
        
        // Keep x within the valid range [-1.0, 1.0] and reverse direction at boundaries
        if (x >= 1.0) {
            x = 1.0;
            direction = -1; // Switch to decrease
        } else if (x <= -1.0) {
            x = -1.0;
            direction = 1;  // Switch to increase
        }
        
        usleep(50000);  // Delay for 0.05 seconds (50,000 microseconds)
    }
    return 0;
}