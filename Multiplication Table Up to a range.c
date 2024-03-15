/* Multiplication Table Up to a range */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n, i, range;
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    do {
        printf("Enter the range (positive integer): ");
        scanf("%d", &range);
    } while (range <- 0);
    
    for (i = 1; i < 11; ++i) {
        printf("%d * %d = %d\n", n, i, n*i);
    }
    return 0;
}