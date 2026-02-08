// sizeof Operator (Basic Version C)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    
    int a;
    float b;
    double c;
    char d;

    printf("Enter int value: ");
    scanf("%d", &a);

    printf("Enter float value: ");
    scanf("%f", &b);

    printf("Enter double value: ");
    scanf("%lf", &c);

    printf("Enter char value: ");
    scanf(" %c", &d);   

    printf("\n--- Sizeof Results ---\n");
    printf("Size of int    = %zu bytes\n", sizeof(a));
    printf("Size of float  = %zu bytes\n", sizeof(b));
    printf("Size of double = %zu bytes\n", sizeof(c));
    printf("Size of char   = %zu byte\n", sizeof(d));

    return 0;
}
