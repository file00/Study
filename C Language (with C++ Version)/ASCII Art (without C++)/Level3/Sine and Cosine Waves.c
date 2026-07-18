// [Title] Sine and Cosine Waves

#include <stdio.h>
#include <math.h>
#include <unistd.h> // For usleep function

int main() {
    
    double x = 0.0;
    
    while(1) {
        
        // Calculate the number of spaces for each wave (range: 0 to 40)
        int sin_spaces = (int)(20 + 20 * sin(x));
        int cos_spaces = (int)(20 + 20 * cos(x));
        
        // Sort positions to print from left to right on the console
        int first = (sin_spaces < cos_spaces) ? sin_spaces : cos_spaces;
        int second = (sin_spaces < cos_spaces) ? cos_spaces : sin_spaces;
        
        // 1. Print spaces before the first wave
        for (int i = 0; i < first; i++) {
            printf(" ");
        }
        
        // If both wave positions overlap
        if (sin_spaces == cos_spaces) {
            printf("X\n"); // Print 'X' for intersection
        } else {
            
            // 2. Print the symbol for the first wave
            if (first == sin_spaces) printf("*");
            else printf("#");
            
            // 3. Print spaces between the first and second waves
            for (int i = first + 1; i < second; i++) {
                printf(" ");
            }
            
            // 4. Print the symbol for the second wave
            if (second == sin_spaces) printf("*\n");
            else printf("#\n");
        }
        
        x += 0.1;       // Move to the next angle
        usleep(50000);  // Delay for 0.05 seconds (50,000 microseconds)
    }
    
    return 0;
}
