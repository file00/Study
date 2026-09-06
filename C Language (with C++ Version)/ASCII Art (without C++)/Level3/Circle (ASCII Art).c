// [Title] Circle (ASCII Art via Mathematical Equation)
#include <stdio.h>

int main() {
    // Set the radius of the circle
    int radius = 10;
    
    // Adjust for console font aspect ratio (width is usually narrower than height)
    float aspect_ratio = 2.0; 

    // Y-axis (vertical) loop
    for (int y = -radius; y <= radius; y++) {
        // X-axis (horizontal) loop
        for (int x = (int)(-radius * aspect_ratio); x <= (int)(radius * aspect_ratio); x++) {
            
            // Normalize coordinates based on the aspect ratio
            float nx = x / aspect_ratio;
            float ny = y;
            
            // Calculate distance using the circle equation: x^2 + y^2
            float distance = nx * nx + ny * ny;
            
            // Print '*' if the coordinate is on the circle's edge (with minor tolerance)
            if (distance > (radius - 0.5) * (radius - 0.5) && distance < (radius + 1.0) * (radius + 1.0)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}