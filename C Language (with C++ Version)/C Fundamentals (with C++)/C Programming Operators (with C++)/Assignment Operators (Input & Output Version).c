// Assignment Operators (Input & Output Version)
// Working of assignment operators 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int a, c;

    printf("Enter an integer value for a: ");
    scanf("%d", &a);

    c = a;        // c = a
    printf("c = %d\n", c);

    c += a;       // c = c + a
    printf("c = %d\n", c);

    c -= a;       // c = c - a
    printf("c = %d\n", c);

    c *= a;       // c = c * a
    printf("c = %d\n", c);

    c /= a;       // c = c / a
    printf("c = %d\n", c);

    c %= a;       // c = c % a
    printf("c = %d\n", c);

    return 0;
}