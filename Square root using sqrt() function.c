/* Square root using sqrt() function */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    float num, root;
    printf("Enter a number: ");
    scanf("%f", &num);
    
    root = sqrt(num);
    printf("Square root of %.2f = %.2f", num, root);
    
    return 0;
}