// Cosine Wave

#include <stdio.h>
#include <math.h>
#include <unistd.h> // For usleep function (Use <windows.h> and Sleep() on Windows)

int main() {
    double x = 0.0;
    
    while(1) {
        // Calculate horizontal positions for both waves (scaled to 0-40 range)
        int sin_pos = (int)(20 + 20 * sin(x));
        int cos_pos = (int)(20 + 20 * cos(x));
        
        // Find the maximum position to limit the loop
        int max_pos = (sin_pos > cos_pos) ? sin_pos : cos_pos;
        
        for (int i = 0; i <= max_pos; i++) {
            if (i == sin_pos && i == cos_pos) {
                printf("@"); // Print '@' where both waves intersect
            } else if (i == sin_pos) {
                printf("*"); // Print '*' for the Sine wave
            } else if (i == cos_pos) {
                printf("#"); // Print '#' for the Cosine wave
            } else {
                printf(" "); // Print empty spaces
            }
        }
        printf("\n");
        
        x += 0.1;       // Move to the next angle
        usleep(50000);  // Delay for 0.05 seconds
    }
    return 0;
}