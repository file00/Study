// Circle (ASCII Art)

#include <stdio.h>
#include <math.h>

int main() {
    int r = 10; // Radius

    for (int y = -r; y <= r; y++) {
        for (int x = -2 * r; x <= 2 * r; x++) {
            
            double distance = (x * 0.5) * (x * 0.5) + y * y;

            if (distance < r * r + 0.8 && distance > r * r - 15.0) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}