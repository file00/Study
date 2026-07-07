// [Title] Cosine Wave

#include <stdio.h>
#include <math.h>
#include <unistd.h> // For usleep function

int main() {
    
    double x = 0.0;
    
    while(1) {
        // Calculate cosine value to determine the number of spaces (approx. 0 to 40)
        int spaces = (int)(20 + 20 * cos(x));
        
        for (int i = 0; i < spaces; i++) {
            printf(" ");
        }
        printf("*\n");
        
        x += 0.1;       // Move to the next angle
        usleep(50000);  // Delay for 0.05 seconds
    }
    
    return 0;
}
