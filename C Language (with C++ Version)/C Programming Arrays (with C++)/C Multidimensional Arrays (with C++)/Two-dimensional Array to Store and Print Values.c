/* Two-dimensional Array to Store and Print Values */

// C program to store temperature of two cities of a week and display it.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

const int CITY = 2;
const int WEEK = 7;
int main() {
    int temperature[CITY][WEEK];
    
    // Using Nested Loop to store Values in a 2d Array
    for (int i = 0; i < CITY; ++i) {
        for (int j = 0; j < WEEK; ++j) {
            printf("City %d, Day %d: ", i + 1, j + 1);
            scanf("%d", &temperature[i][j]);
        }
    }
    printf("\nDisplaying Values: \n\n");
    
    // Using Nested Loop to store Values in a 2d Array
    for (int i = 0; i < CITY; ++i) {
        for (int j = 0; j < WEEK; ++j) {
            printf("City %d, Day %d = %d\n", i + 1, j + 1, temperature[i][j]);
        }
    }
    return 0;
}