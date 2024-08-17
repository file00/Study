/* Sum of Two Matrices */
// C program to find the sum of two matrices of order 2*2

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    float a[2][2], b[2][2], result[2][2];
    
    // Taking input using Nested for loop
    printf("Enter elements of 1st Matrix\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("Enter a%d%d: ", i + 1, j + 1);
            scanf("%f", &a[i][j]);
        }
    }   
    // Taking input using Nested for loop
    printf("Enter elements of 2nd Matrix\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("Enter b%d%d: ", i + 1, j + 1);
            scanf("%f", &b[i][j]);
        }
    }
        
    // Adding corresponding elements of Two arrays
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }   
    // Displaying the Sum
    printf("\nSum Of Matrix:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%.1f\t", result[i][j]);
            
            if (j == 1) printf("\n");
        }
    }
    return 0;
}
