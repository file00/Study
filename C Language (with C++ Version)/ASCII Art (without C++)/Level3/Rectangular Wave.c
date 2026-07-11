// [Title] Rectangular Wave

#include <stdio.h>
#include <unistd.h> // For usleep function (Use <windows.h> and Sleep() on Windows)

int main() {
    
    int count = 0;
    int current_spaces = 10; // Left position (minimum amplitude)
    
    const int LOW_SPACES = 10;   // Position for the low state
    const int HIGH_SPACES = 30;  // Position for the high state
    const int DURATION = 15;     // Number of lines to stay in each state

    while(1) {
        // Output spaces and the marker
        for (int i = 0; i < current_spaces; i++) {
            printf(" ");
        }
        printf("*\n");

        count++;

        // When the duration is reached, toggle the position
        if (count >= DURATION) {
            if (current_spaces == LOW_SPACES) {
                // Draw a horizontal line moving right
                for (int i = LOW_SPACES + 1; i <= HIGH_SPACES; i++) {
                    for (int j = 0; j < i; j++) printf(" ");
                    printf("*\n");
                }
                current_spaces = HIGH_SPACES;
            } else {
                // Draw a horizontal line moving left
                for (int i = HIGH_SPACES - 1; i >= LOW_SPACES; i--) {
                    for (int j = 0; j < i; j++) printf(" ");
                    printf("*\n");
                }
                current_spaces = LOW_SPACES;
            }
            count = 0; // Reset the duration counter
        }

        usleep(50000); // Delay for 0.05 seconds (50,000 microseconds)
    }

    return 0;
}