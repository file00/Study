// [Title] Tangent Wave

#include <stdio.h>
#include <math.h>
#include <unistd.h> // For usleep function

int main() {
    
    double x = 0.0;
    
    while(1) {
        // Calculate tangent value and scale it
        // Tangent can go to infinity, so we multiply by a smaller factor (e.g., 5)
        int spaces = (int)(20 + 5 * tan(x));
        
        // Cap the spaces between 0 and 40 to prevent printing out of screen bounds
        if (spaces < 0) {
            spaces = 0;
        } else if (spaces > 40) {
            spaces = 40;
        }
        
        for (int i = 0; i < spaces; i++) {
            printf(" ");
        }
        printf("*\n");
        
        x += 0.05;      // Slightly smaller step for a smoother tangent curve
        usleep(50000);  // Delay for 0.05 seconds
    }
    
    return 0;
}