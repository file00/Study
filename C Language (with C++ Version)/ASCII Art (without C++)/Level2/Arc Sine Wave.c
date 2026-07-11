// [Title] Arc Sine Wave

#define _USE_MATH_DEFINES // Enables math constants like M_PI
#include <stdio.h>
#include <math.h>
#include <unistd.h> // For usleep function (Use <windows.h> and Sleep() on Windows)

int main() {
    
    double x = -1.0;
    double step = 0.05; // Amount of change per step
    int direction = 1;  // 1 for increasing, -1 for decreasing

    while(1) {
        // asin(x) returns values from -PI/2 to PI/2
        // Normalize the value to map into 0 to 40 spaces
        int spaces = (int)(20 + (20 * (asin(x) / (M_PI / 2))));
        
        for (int i = 0; i < spaces; i++) {
            printf(" ");
        }
        printf("*\n");
        
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
