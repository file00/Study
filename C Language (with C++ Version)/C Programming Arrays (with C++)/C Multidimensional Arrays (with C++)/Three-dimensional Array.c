// Three-dimensional Array 

// C Program to store and print 12 values entered by the user

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int test[2][3][2];
    
    printf("Enter 12 Values: \n");
    
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 2; ++k) {
                scanf("%d", &test[i][j][k]);
            }
        }
    }
    // Printing values with the proper Index
    
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 2; ++k) {
                printf("test[%d][%d][%d] = %d\n", i, j, k, test[i][j][k]);
            }
        }
    }
    return 0;
}
