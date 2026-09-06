// [Title] United States Flag (ASCII Art)
#include <stdio.h>

int main() {
    
    // 1. Top section: Canton (Stars) + Upper Stripes
    // The Canton spans across the first 7 stripes
    for (int i = 0; i < 7; i++) {
        // Print the Canton (Blue field with Stars)
        if (i % 2 == 0) {
            printf("* * * * * *  "); // 6 stars rows
        } else {
            printf(" * * * * *   "); // 5 stars rows
        }

        // Print the remaining part of the stripe (Upper Stripes)
        // Alternate between Red (#) and White (spaces)
        if (i % 2 == 0) {
            printf("############################\n"); // Red stripe
        } else {
            printf("                            \n"); // White stripe
        }
    }

    // 2. Bottom section: Lower Stripes only
    // The remaining 6 stripes span the entire width of the flag
    for (int i = 7; i < 13; i++) {
        if (i % 2 == 0) {
            printf("############################################\n"); // Red stripe
        } else {
            printf("                                            \n"); // White stripe
        }
    }

    return 0;
}
