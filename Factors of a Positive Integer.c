/* Factors of a Positive Integer */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num, i;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; ++i) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
