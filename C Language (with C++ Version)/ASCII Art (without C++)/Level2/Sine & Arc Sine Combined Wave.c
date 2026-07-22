// [Title] Sine & Arc Sine Combined Wave

#define _USE_MATH_DEFINES // Enables math constants like M_PI
#include <stdio.h>
#include <math.h>
#include <unistd.h> // For usleep function

int main() {
    
    double x = -1.0;     // Domain of asin(x) is [-1.0, 1.0]
    double step = 0.05;  // Step size for smooth wave
    int direction = 1;   // 1 for increasing, -1 for decreasing

    while(1) {
        // 1. Calculate Sine spaces (Normalized between 0 and 40)
        // sin(x) ranges from -1.0 to 1.0. Scale and shift to 0 to 40.
        int sin_spaces = (int)(20 + (20 * sin(x)));
        
        // 2. Calculate Arc Sine spaces (Normalized between 0 and 40)
        // asin(x) ranges from -PI/2 to PI/2. Divide by PI/2 to get -1 to 1, then scale.
        int asin_spaces = (int)(20 + (20 * (asin(x) / (M_PI / 2))));
        
        // 3. Print the characters based on their positions
        int max_spaces = (sin_spaces > asin_spaces) ? sin_spaces : asin_spaces;
        
        for (int i = 0; i <= max_spaces; i++) {
            if (i == sin_spaces && i == asin_spaces) {
                printf("*"); // Cross point
                break;       // No need to print further for this line
            } else if (i == sin_spaces) {
                printf("S"); // Sine point
                if (i > asin_spaces) break;
            } else if (i == asin_spaces) {
                printf("A"); // Arc Sine point
                if (i > sin_spaces) break;
            } else {
                printf(" ");
            }
        }
        printf("\n");
        
        // 4. Update x value and reverse direction at boundaries
        x += step * direction;
        if (x >= 1.0) {
            x = 1.0;
            direction = -1; // Switch to decrease
        } else if (x <= -1.0) {
            x = -1.0;
            direction = 1;  // Switch to increase
        }
        
        usleep(50000);  // Delay for 0.05 seconds
    }
    
    return 0;
}