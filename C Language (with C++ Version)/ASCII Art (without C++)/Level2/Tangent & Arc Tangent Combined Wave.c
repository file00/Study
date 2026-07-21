// [Title] Tangent & Arc Tangent Combined Wave

#define _USE_MATH_DEFINES // Enables math constants like M_PI
#include <stdio.h>
#include <math.h>
#include <unistd.h> // For usleep function

int main() {
    
    double x = -3.0;     // Start point
    double step = 0.05;  // Step size for smooth wave
    int direction = 1;   // 1 for increasing, -1 for decreasing to create a loop

    while(1) {
        // 1. Calculate Tangent spaces (Capped between 0 and 40)
        int tan_spaces = (int)(20 + 5 * tan(x));
        if (tan_spaces < 0) tan_spaces = 0;
        if (tan_spaces > 40) tan_spaces = 40;
        
        // 2. Calculate Arc Tangent spaces (Normalized between 0 and 40)
        int atan_spaces = (int)(20 + (20 * (atan(x) / (M_PI / 2))));
        
        // 3. Print the characters based on their positions
        int max_spaces = (tan_spaces > atan_spaces) ? tan_spaces : atan_spaces;
        
        for (int i = 0; i <= max_spaces; i++) {
            if (i == tan_spaces && i == atan_spaces) {
                printf("*"); // Cross point
                break;       // No need to print further for this line
            } else if (i == tan_spaces) {
                printf("T"); // Tangent point
                if (i > atan_spaces) break;
            } else if (i == atan_spaces) {
                printf("A"); // Arc Tangent point
                if (i > tan_spaces) break;
            } else {
                printf(" ");
            }
        }
        printf("\n");
        
        // 4. Update x value and reverse direction at boundaries
        x += step * direction;
        if (x >= 3.0) {
            x = 3.0;
            direction = -1;
        } else if (x <= -3.0) {
            x = -3.0;
            direction = 1;
        }
        
        usleep(50000);  // Delay for 0.05 seconds
    }
    
    return 0;
}